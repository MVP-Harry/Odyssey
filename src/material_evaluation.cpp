#include <libchess/position.hpp>

namespace libchess {

int Position::material_evaluation() {
    // TODO: bonus for bishop pair
    // penalty for rook pair ?
    // penalty for knight pair
    // trade down bonus when up material
    // bad trade penalty (when down material, three pawns vs a piece etc.)
    // insufficient material in endgame
    int score = 0;

    return score;
}

} // namespace libchess
