#ifndef USEFUL_MASKS
#define USEFUL_MASKS

#include <libchess/bitboard.hpp>
using namespace libchess;

// file masks
extern Bitboard file_masks[64];
// rank masks
extern Bitboard rank_masks[64];
// isolated pawn masks
extern Bitboard isolated_masks[64];
// white passed pawn masks
extern Bitboard white_passed_masks[64];
// black passed pawn masks
extern Bitboard black_passed_masks[64];

void init_masks();

#endif