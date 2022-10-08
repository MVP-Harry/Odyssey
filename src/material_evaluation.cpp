#include <libchess/position.hpp>
#include <libchess/piece_square_table.hpp>

namespace libchess {

int Position::material_evaluation() {
    // TODO: bonus for bishop pair
    // penalty for rook pair ?
    // penalty for knight pair
    // trade down bonus when up material
    // bad trade penalty (when down material, three pawns vs a piece etc.)
    // insufficient material in endgame
    int score = 0;

    for (int current_piece = Pawn; current_piece <= King; current_piece++) {
        libchess::Bitboard piece_bitboard = pieces(turn(), Piece(current_piece));

        while (piece_bitboard) {
            // finding 
            Square square = piece_bitboard.lsb();
            piece_bitboard ^= square;
        }

    }

    return score;
}

} // namespace libchess
