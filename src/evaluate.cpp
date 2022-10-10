#include <libchess/position.hpp>
#include <libchess/piece_square_table.hpp>
#include <libchess/useful_masks.hpp>
#include <libchess/movegen.hpp>
#include <iostream>

namespace libchess {

int Position::evaluate() {
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

    // deciding the current game phase based on the game_phase_score
    int phase_score = game_phase_score();
    int game_phase = -1;
    if (phase_score > opening_phase_score) game_phase = opening;
    else if (phase_score < endgame_phase_score) game_phase = endgame;
    else game_phase = middlegame;

    std::cout << "Current game phase is: " << game_phase << std::endl;

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
                case Pawn: {
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
                }
                    break; 

                // no additional bonus/penalties for knights
                case Knight: break;

                case Bishop: {
                    // consider the mobilitiy of the bishop
                    int bishop_moves = movegen::bishop_moves(square, occupied()).count();
                    score_opening += (bishop_moves - bishop_unit) * bishop_mobility_opening;
                    score_endgame += (bishop_moves - bishop_unit) * bishop_mobility_endgame;
                }
                    break;
                
                case Rook: {
                    // bonus for semi-open file
                    bool is_semi_open = ((occupancy(Pawn) & occupancy(White)) & file_masks[int_square]).empty();
                    if (is_semi_open) {
                        score_opening += semi_open_file_score;
                        score_endgame += semi_open_file_score;
                    }

                    // bonus for open file
                    bool is_open = (occupancy(Pawn) & file_masks[int_square]).empty();
                    if (is_open) {
                        score_opening += open_file_score;
                        score_endgame += open_file_score;
                    }
                }
                    break;

                
                case Queen: {
                    // consider the mobility of the queen
                    int queen_moves = movegen::queen_moves(square, occupied()).count();
                    score_opening += (queen_moves - queen_unit) * queen_mobility_opening;
                    score_endgame += (queen_moves - queen_unit) * queen_mobility_endgame;
                }
                    break;

                case King: {
                    // penalties for semi-open file
                    bool is_semi_open = ((occupancy(Pawn) & occupancy(White)) & file_masks[int_square]).empty();
                    if (is_semi_open) {
                        score_opening -= semi_open_file_score;
                        score_endgame -= semi_open_file_score;
                    }

                    // penalties for open file
                    bool is_open = (occupancy(Pawn) & file_masks[int_square]).empty();
                    if (is_open) {
                        score_opening -= open_file_score;
                        score_endgame -= open_file_score;
                    }

                    // bonus for king shield
                    int king_shield = (movegen::king_moves(square) & occupancy(White)).count();
                    score_opening += king_shield * king_shield_bonus;
                    score_endgame += king_shield * king_shield_bonus;
                }
                    break;
                
                default:
                    std::cout << current_piece << std::endl;
                    throw std::invalid_argument("Are you sure you are playing chess?");
                    break;
            }
        }

    }
    
    // for the black pieces
    for (int current_piece = Pawn; current_piece <= King; current_piece++) {
        libchess::Bitboard piece_bitboard = pieces(Black, Piece(current_piece));

        // pure material score, not considering the position of the pieces
        score_opening -= piece_bitboard.count() * material_score[opening][current_piece];
        score_endgame -= piece_bitboard.count() * material_score[endgame][current_piece];

        while (piece_bitboard) {
            Square square = piece_bitboard.lsb();
            int int_square = (int) square;
            piece_bitboard ^= square;
            
            // taking the placement of the pieces into account
            // for the black pieces, we need to take the opposite square
            score_opening -= positional_score[opening][current_piece][(int) square.flip()];
            score_endgame -= positional_score[endgame][current_piece][(int) square.flip()];

            // special rewards/penalties based on the pieces
            switch (current_piece) {
                case Pawn: {
                    // punish double pawns
                    int double_pawns = (file_masks[int_square] & pieces(Black, Pawn)).count();
                    if (double_pawns > 1) {
                        score_opening -= (double_pawns - 1) * double_pawn_penalty_opening;
                        score_endgame -= (double_pawns - 1) * double_pawn_penalty_endgame;
                    }

                    // punish isolated pawns
                    bool is_isolated = (isolated_masks[int_square] & pieces(Black, Pawn)).empty();
                    if (is_isolated) {
                        score_opening -= isolated_pawn_penalty_opening;
                        score_endgame -= isolated_pawn_penalty_endgame;
                    }

                    // reward passed pawns
                    bool is_passed = (black_passed_masks[int_square] & pieces(White, Pawn)).empty();
                    if (is_passed) {
                        score_opening -= passed_pawn_bonus[8 - square.rank()];
                        score_endgame -= passed_pawn_bonus[8 - square.rank()];
                    }
                }
                    break; 

                // no additional bonus/penalties for knights
                case Knight: break;

                case Bishop: {
                    // consider the mobilitiy of the bishop
                    int bishop_moves = movegen::bishop_moves(square, occupied()).count();
                    score_opening -= (bishop_moves - bishop_unit) * bishop_mobility_opening;
                    score_endgame -= (bishop_moves - bishop_unit) * bishop_mobility_endgame;
                }
                    break;
                
                case Rook: {
                    // bonus for semi-open file
                    bool is_semi_open = ((occupancy(Pawn) & occupancy(Black)) & file_masks[int_square]).empty();
                    if (is_semi_open) {
                        score_opening -= semi_open_file_score;
                        score_endgame -= semi_open_file_score;
                    }

                    // bonus for open file
                    bool is_open = (occupancy(Pawn) & file_masks[int_square]).empty();
                    if (is_open) {
                        score_opening -= open_file_score;
                        score_endgame -= open_file_score;
                    }
                }
                    break;

                
                case Queen: {
                    // consider the mobility of the queen
                    int queen_moves = movegen::queen_moves(square, occupied()).count();
                    score_opening -= (queen_moves - queen_unit) * queen_mobility_opening;
                    score_endgame -= (queen_moves - queen_unit) * queen_mobility_endgame;
                }
                    break;

                case King: {
                    // penalties for semi-open file
                    bool is_semi_open = ((occupancy(Pawn) & occupancy(Black)) & file_masks[int_square]).empty();
                    if (is_semi_open) {
                        score_opening += semi_open_file_score;
                        score_endgame += semi_open_file_score;
                    }

                    // penalties for open file
                    bool is_open = (occupancy(Pawn) & file_masks[int_square]).empty();
                    if (is_open) {
                        score_opening += open_file_score;
                        score_endgame += open_file_score;
                    }

                    // bonus for king shield
                    int king_shield = (movegen::king_moves(square) & occupancy(Black)).count();
                    score_opening -= king_shield * king_shield_bonus;
                    score_endgame -= king_shield * king_shield_bonus;
                }
                    break;
                
                default:
                    std::cout << current_piece << std::endl;
                    throw std::invalid_argument("Are you sure you are playing chess?");
                    break;
            }
        }
    }

    // if middlegame, weight the score
    if (game_phase == middlegame) {
        score = (
            score_opening * phase_score +
            score_endgame * (opening_phase_score - phase_score)
        ) / opening_phase_score;
    } 
    else if (game_phase == opening) score = score_opening;
    else score = score_endgame;

    return (turn() == White) ? score : -score;
}

} // namespace libchess
