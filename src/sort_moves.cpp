#include <libchess/position.hpp>
using namespace libchess;

void Position::score_move(Move move) {

}

void Position::enable_pv_scoring(std::vector<Move> move_list) {
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