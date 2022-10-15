#include <libchess/position.hpp>
#include <iostream>
using namespace libchess;

int Position::quiescence(int alpha, int beta) {
    // if (node > 10000) exit(0);
    // std::cout << alpha << " " << beta << std::endl;
    // node++;
    // evaluate position
    int evaluation = evaluate();

    if (ply > max_ply) return evaluation;

    if (evaluation >= beta) {
        // node fails-high
        return beta;
    }

    nodes++;

    if (nodes > 15000000) {
        return 0;
    }

    // if ((nodes & 8191) == 0) {
    //     milliseconds nowtime = duration_cast<milliseconds> (
    //         system_clock::now().time_since_epoch()
    //     );
    //     // print search info
    //     long long total_time = (nowtime - starttime).count();

    //     if (time_limit != -1 && total_time > (long long) 1000 * time_limit)
    //         return 0;
    // }

    if (evaluation > alpha) {
        // found a better move
        alpha = evaluation;
    }

    // create a list of legal moves
    std::vector<Move> move_list = legal_captures();

    // sort moves
    sort_moves(move_list);

    for (auto move : move_list) {
        ply++;
        makemove(move);

        // similar to the idea of negamax
        int score = -quiescence(-beta, -alpha);

        undomove();
        ply--;

        if (score >= beta)
            return beta;
        if (score > alpha)
            alpha = score;
    }

    return alpha;
}