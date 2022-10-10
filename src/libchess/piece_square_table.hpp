#ifndef PIECE_SQUARE_TABLE
#define PIECE_SQUARE_TABLE

// positional_score[game_phase][piece][square]
// See https://www.chessprogramming.org/PeSTO%27s_Evaluation_Function for more information
extern const int positional_score[2][6][64];

// material score [game phase][piece]
extern const int material_score[2][12];

// double pawn penalty
extern const int double_pawn_penalty_opening;
extern const int double_pawn_penalty_endgame;

// isolated pawn penalty
extern const int isolated_pawn_penalty_opening;
extern const int isolated_pawn_penalty_endgame;

// passed pawn bonus
extern const int passed_pawn_bonus[8];

// semi open file score
extern const int semi_open_file_score;

// open file score
extern const int open_file_score;

// mobility units
extern const int bishop_unit;
extern const int queen_unit;

// mobility bonuses
extern const int bishop_mobility_opening;
extern const int bishop_mobility_endgame;
extern const int queen_mobility_opening;
extern const int queen_mobility_endgame;

// king's shield bonus
extern const int king_shield_bonus;

extern const int opening_phase_score;
extern const int endgame_phase_score;

enum {opening, endgame, middlegame};

#endif