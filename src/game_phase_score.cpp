#include <libchess/position.hpp>
#include <libchess/piece_square_table.hpp>

namespace libchess {
    int Position::game_phase_score() {
        int game_phase_score = 0;

        for (int piece = Knight; piece <= Queen; piece++) {
            game_phase_score += occupancy(Piece(piece)).count() * material_score[opening][piece];
        }

        return game_phase_score;
    }
}