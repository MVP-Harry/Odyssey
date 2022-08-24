#include <libchess/position.hpp>

namespace libchess {

int Position::evaluation() {
    // score is calculated in terms of centipawn
    // i.e. the value of a pawn is 100
    int score = 0;

    // calculating material
    score += material_evaluation();

    return score;
}

} // namespace libchess
