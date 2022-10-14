#include <libchess/position.hpp>
#include <iostream>
using namespace libchess;

int Position::quiescence(int alpha, int beta) {
    // if (node > 10000) exit(0);
    // std::cout << alpha << " " << beta << std::endl;
    // node++;
    // evaluate position
    int evaluation = evaluate();

    if (halfmoves() > max_ply) return evaluation;

    if (evaluation >= beta) {
        // node fails-high
        return beta;
    }

    if (evaluation > alpha) {
        // found a better move
        alpha = evaluation;
    }

    // create a list of legal moves
    std::vector<Move> move_list = legal_captures();

    // sort moves
    sort_moves(move_list);

    for (auto move : move_list) {
        makemove(move);

        // similar to the idea of negamax
        int score = -quiescence(-beta, -alpha);

        undomove();

        if (score >= beta)
            return beta;
        if (score > alpha)
            alpha = score;
    }

    return alpha;
}