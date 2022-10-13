#include <libchess/position.hpp>
using namespace libchess;

int Position::score_move(Move move) {
    if (score_pv) {
        if (pv_table[0][halfmoves()] == move) {
            // disable score PV flag and give this move the highest priority
            score_pv = 0;
            return 20000;
        }
    }

    if (move.is_capturing()) {
        return mvv_lva[move.piece()][move.captured()] + 10000;
    }

    else {
        int ply = halfmoves();
        if (killer_moves[0][ply] == move) return 9000;
        else if (killer_moves[1][ply] == move) return 8000;
        else return his_moves[(int) move.piece()][(int) move.to()];
    }

    return 0;
}

void Position::enable_pv_scoring(std::vector<Move> move_list) {
    // need to understand this part better
    // disable following pv
    follow_pv = 0;

    int ply = halfmoves();
    for (auto move : move_list) {
        if (pv_table[0][ply] == move) {
            score_pv = 1;
            follow_pv = 1;
        }
    }
}

void Position::sort_moves(std::vector<Move> move_list) {
    
}