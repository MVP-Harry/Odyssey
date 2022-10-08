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

        while (piece_bitboard) {
            Square square = piece_bitboard.lsb();
            piece_bitboard ^= square;
            
            // taking the placement of the pieces into account
            score_opening += positional_score[opening][current_piece][(int) square];
            score_endgame += positional_score[endgame][current_piece][(int) square];

            // special rewards/penalties based on the pieces
            switch (current_piece) {
                case Pawn:
                    // punish double pawns
                    int double_pawns = ;
                    break; 

                case Knight:
                    ;
                    break;

                case Bishop:
                    ;
                    break;
                
                case Rook:
                    ;
                    break;

                case Queen:
                    ;
                    break;

                case King:
                    ;
                    break;
            }
        }

    }

    return score;
}

} // namespace libchess
