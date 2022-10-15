#include <libchess/position.hpp>
#include <chrono>
#include <iostream>
using namespace std::chrono;
using namespace libchess;

int Position::negamax(int alpha, int beta, int depth) {
    // std::cout << alpha << " " << beta << " " << depth << std::endl;
    int score = 0;
    
    // init pv_length
    pv_length[ply] = ply;

    // run quiescence search to stablize alpha-beta
    if (depth == 0)
        return quiescence(alpha, beta);
    
    // if exceeds max_ply
    if (ply >= max_ply)
        return evaluate();

    nodes++;

    if ((nodes & 8191) == 0) {
        milliseconds nowtime = duration_cast<milliseconds> (
            system_clock::now().time_since_epoch()
        );
        // print search info
        long long total_time = (nowtime - starttime).count();

        if (time_limit != -1 && total_time > (long long) 1000 * time_limit)
            return 0;
    }

    // if (nodes > 200000000) {
    //     std::cout << "TOO MANY NODES" << std::endl;
    //     std::cout << "BREAKING...";
    //     exit(0);
    // }
    
    // if in check, increase the depth by 1
    if (in_check()) depth++;

    // TODO: null-move pruning
    // TODO: hashing alpha-beta search

    std::vector<Move> move_list = legal_moves();

    // if we are following PV line
    if (follow_pv)
        enable_pv_scoring(move_list);

    sort_moves(move_list);

    int moves_searched = 0;

    for (auto move : move_list) {
        makemove(move);
        ply++;

        if (moves_searched == 0) {
            // full depth search
            score = -negamax(-beta, -alpha, depth - 1);
        }

        else {
            // Late-move reduction
            if ((moves_searched >= full_depth_moves) &&
                (depth >= reduction_limit) &&
                (in_check() == false) &&
                (move.is_capturing() == false) &&
                (move.is_promoting() == false)
            )
                score = -negamax(-alpha - 1, -alpha, depth - 2);

            else score = alpha + 1;

            if (score > alpha) {
                score = -negamax(-alpha - 1, -alpha, depth - 1);
                if (score > alpha && score < beta)
                    score = -negamax(-beta, -alpha, depth - 1);
            }
        }
    
        undomove();
        ply--;
        moves_searched++;

        if (score > alpha) {
            // on quiet moves
            if (!move.is_capturing()) {
                his_moves[(int) move.piece()][(int) move.to()] += depth;
            }

           // PV Node
           alpha = score;
           pv_table[ply][ply] = move;
           for (int next_ply = ply + 1; next_ply < pv_length[ply + 1]; next_ply++) {
                pv_table[ply][next_ply] = pv_table[ply + 1][next_ply];
           }
           pv_length[ply] = pv_length[ply + 1];
        }

        // hard beta cutoff
        if (score >= beta) {
            if (!move.is_capturing()) {
                killer_moves[1][ply] = killer_moves[0][ply];
                killer_moves[0][ply] = move;
            }
            return beta;
        }

    }

    if (move_list.empty()) {
        // checkmate
        if (in_check())
            return -mate_value + ply;

        // stalemate
        else return 0;
    }

    return alpha;
}