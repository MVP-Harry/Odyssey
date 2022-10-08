#include <libchess/position.hpp>
#include <libchess/piece_square_table.hpp>

namespace libchess {

int Position::material_evaluation() {
    /* 
    Evaluation ideas:
    penalty for rook pair
    penalty for knight pair
    trade down bonus when up material
    bad trade penalty (when down material, three pawns vs a piece etc.)
    insufficient material in endgame
    */

    // score is based on the current game phase
    int score = 0;
    int score_opening = 0, score_endgame = 0;

    // for the white pieces
    for (int current_piece = Pawn; current_piece <= King; current_piece++) {
        libchess::Bitboard piece_bitboard = pieces(White, Piece(current_piece));

        // pure material score, not considering the position of the pieces
        score_opening += piece_bitboard.count() * material_score[opening][current_piece];
        score_endgame += piece_bitboard.count() * material_score[endgame][current_piece];

        // taking the placement of the piueces into account
        switch (current_piece) {
            case Pawn:
                while (piece_bitboard) {
                    Square square = piece_bitboard.lsb();
                    piece_bitboard ^= square;
                    
                }
        }

    }

    return score;
}

} // namespace libchess
