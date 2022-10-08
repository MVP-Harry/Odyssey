#ifndef USEFUL_MASKS
#define USEFUL_MASKS

#include <libchess/bitboard.hpp>

// file masks
libchess::Bitboard file_masks[64];
// rank masks
libchess::Bitboard rank_masks[64];
// isolated pawn masks
libchess::Bitboard isolated_masks[64];
// white passed pawn masks
libchess::Bitboard white_passed_masks[64];
// black passed pawn masks
libchess::Bitboard black_passed_masks[64];

void init_masks();

#endif