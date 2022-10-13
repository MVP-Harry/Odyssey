#include <libchess/position.hpp>
using namespace libchess;

int Position::quiescence(int alpha, int beta) {
    // evaluate position
    int evaluation = evaluate();

    if (evaluation >= beta) {
        // node fails-high
        return beta;
    }

    if (evaluation > alpha) {
        // found a better move
        alpha = evaluation;
    }

    // create a list of legal moves
    std::vector<Move> move_list = legal_moves();

    // sort moves
    sort_moves(move_list);
}