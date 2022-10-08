#include <libchess/useful_masks.hpp>
#include <iostream>
using namespace libchess;

// file masks
Bitboard file_masks[64];
// rank masks
Bitboard rank_masks[64];
// isolated pawn masks
Bitboard isolated_masks[64];
// white passed pawn masks
Bitboard white_passed_masks[64];
// black passed pawn masks
Bitboard black_passed_masks[64];

void init_masks() {
    // initialzing rank_masks;
    for (int rank = 0; rank < 8; rank++) {
        Bitboard set_rank;
        for (int file = 0; file < 8; file++) {
            Square square(8 * rank + file);
            set_rank.set(square);
        }
        for (int file = 0; file < 8; file++) {
            rank_masks[8 * rank + file] = set_rank;
        }
    }

    // initializing file_masks;
    for (int file = 0; file < 8; file++) {
        Bitboard set_file;
        for (int rank = 0; rank < 8; rank++) {
            Square square(8 * rank + file);
            set_file.set(square);
        }
        for (int rank = 0; rank < 8; rank++) {
            file_masks[8 * rank + file] = set_file;
        }
    }
}