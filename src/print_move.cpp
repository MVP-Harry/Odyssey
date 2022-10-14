#include <libchess/move.hpp>
#include <iostream>
using namespace libchess;

std::string Move::print_move() {
    std::string notation;

    std::string piece_name = " NBRQK";
    Square from = Move::from();
    Square to = Move::to();

    if (Move::piece() == Pawn) {

        notation += ('a' + from.file());
        if (!Move::is_capturing()) {
            notation += ('1' + to.rank());
        }
        else {
            notation += 'x';
            notation += std::string(to);
        }

        // if promotion
        if (Move::is_promoting()) {
            notation += '=';
            notation += piece_name[Move::promotion()];
        }
    }
    else {
        // TODO: implement the case where there are multiple pieces attacking the same square
        notation += piece_name[Move::piece()];
        if (Move::is_capturing()) notation += 'x';
        notation += std::string(to);
    }

    return notation;
}