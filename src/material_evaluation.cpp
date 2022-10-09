#include <libchess/position.hpp>
#include <libchess/piece_square_table.hpp>
#include <libchess/useful_masks.hpp>

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
            int int_square = (int) square;
            piece_bitboard ^= square;
            
            // taking the placement of the pieces into account
            score_opening += positional_score[opening][current_piece][int_square];
            score_endgame += positional_score[endgame][current_piece][int_square];

            // special rewards/penalties based on the pieces
            switch (current_piece) {
                case Pawn:
                    // punish double pawns
                    int double_pawns = (file_masks[int_square] & pieces(White, Pawn)).count();
                    if (double_pawns > 1) {
                        score_opening += (double_pawns - 1) * double_pawn_penalty_opening;
                        score_endgame += (double_pawns - 1) * double_pawn_penalty_endgame;
                    }

                    // punish isolated pawns
                    bool is_isolated = (isolated_masks[int_square] & pieces(White, Pawn)).empty();
                    if (is_isolated) {
                        score_opening += isolated_pawn_penalty_opening;
                        score_endgame += isolated_pawn_penalty_endgame;
                    }

                    // reward passed pawns
                    bool is_passed = (white_passed_masks[int_square] & pieces(Black, Pawn)).empty();
                    if (is_passed) {
                        score_opening += passed_pawn_bonus[square.rank()];
                        score_endgame += passed_pawn_bonus[square.rank()];
                    }
                    break; 

                // no additional bonus/penalties for knights

                case Bishop:
                    ;
                    break;
                
                /*
                case Rook:
                    ;
                    break;

                case Queen:
                    ;
                    break;

                case King:
                    ;
                    break;
                */
            }
        }

    }

    return score;
}

} // namespace libchess
