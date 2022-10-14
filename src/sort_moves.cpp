#include <libchess/position.hpp>
#include <algorithm>
using namespace libchess;

int Position::score_move(Move move) {
    if (score_pv) {
        if (pv_table[0][ply] == move) {
            // disable score PV flag and give this move the highest priority
            score_pv = 0;
            return 20000;
        }
    }

    if (move.is_capturing()) {
        return mvv_lva[move.piece()][move.captured()] + 10000;
    }

    else {
        if (killer_moves[0][ply] == move) return 9000;
        else if (killer_moves[1][ply] == move) return 8000;
        else return his_moves[(int) move.piece()][(int) move.to()];
    }

    return 0;
}

void Position::enable_pv_scoring(std::vector<Move> move_list) {
    // need to understand this part better
    // disable following pv
    follow_pv = 0;

    for (auto move : move_list) {
        if (pv_table[0][ply] == move) {
            score_pv = 1;
            follow_pv = 1;
        }
    }
}

void Position::sort_moves(std::vector<Move>& move_list) {
    std::vector<std::pair<Move, int> > moves_with_score; 
    for (auto move : move_list) {
        moves_with_score.push_back(std::make_pair(move, score_move(move)));
    }

    std::sort(moves_with_score.begin(), moves_with_score.end(),
                [](const auto& i, const auto& j) { return i.second > j.second; });

    move_list.clear();
    for (auto p : moves_with_score)
        move_list.push_back(p.first);
}