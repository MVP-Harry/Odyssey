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
    
    // initializing isolated_masks: the file(s) next to the current file
    for (int file = 0; file < 8; file++) {
        for (int rank = 0; rank < 8; rank++) {
            int square = 8 * rank + file;
            if (file != 0) isolated_masks[square] |= file_masks[square - 1];
            if (file != 7) isolated_masks[square] |= file_masks[square + 1];
        }
    }

    // initializing white_passed_masks
    for (int file = 0; file < 8; file++) {
        for (int rank = 0; rank < 8; rank++) {
            int square = 8 * rank + file;
            if (file != 0) white_passed_masks[square] |= file_masks[square - 1];
            if (file != 7) white_passed_masks[square] |= file_masks[square + 1];
            white_passed_masks[square] |= file_masks[square];
            int get_rid_of = square;
            while (get_rid_of >= 0) {
                white_passed_masks[square] &= (~rank_masks[get_rid_of]);
                get_rid_of -= 8;
            }
        }
    }
    
    // initializing black_passed_masks
    for (int file = 0; file < 8; file++) {
        for (int rank = 0; rank < 8; rank++) {
            int square = 8 * rank + file;
            if (file != 0) black_passed_masks[square] |= file_masks[square - 1];
            if (file != 7) black_passed_masks[square] |= file_masks[square + 1];
            black_passed_masks[square] |= file_masks[square];
            int get_rid_of = square;
            while (get_rid_of < 64) {
                black_passed_masks[square] &= (~rank_masks[get_rid_of]);
                get_rid_of += 8;
            }
        }
    }
}