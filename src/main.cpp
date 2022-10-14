/* 
 * The below program initializes a position using fen
 * and calculate the perft value of the current position
*/

#include <chrono>
#include <iostream>
#include <libchess/useful_masks.hpp>
#include <libchess/position.hpp>
#include <libchess/movegen.hpp>
#define tricky_position "r3k2r/p1ppqpb1/bn2pnp1/3PN3/1p2P3/2N2Q1p/PPPBBPPP/R3K2R w KQkq - 0 1"
using namespace libchess;

int main(int argc, char **argv) {
    
    /*
    Intializing useful masks
    */ 
    init_masks();

    /*
    argc is the number of arguments that the main function takes
    argc is automatically counted
    argv is a string array that contains all the command-line arguments
    */

    /* 
    Initializing a position 
    */

    // int depth = 6;
    // std::string fen;

    // if (argc > 1) {
    //     depth = std::stoi(std::string(argv[1]));
    //     depth = std::max(depth, 1);
    // }

    // if (argc > 2) {
    //     for (int i = 2; i < argc; i++) {
    //         if (fen.empty()) {
    //             fen = std::string(argv[i]);
    //         } else {
    //             fen += " " + std::string(argv[i]);
    //         }
    //     }
    // } else {
    //     fen = "startpos";
    // }

    // auto pos = libchess::Position(tricky_position);

    // std::cout << pos << std::endl;
    // std::cout << std::endl;

    // Move move = pos.find_best_move(8);

    // move.print_move();

    auto pos = libchess::Position("startpos");
    Move move = pos.find_best_move(8);
    std::cout << move << std::endl;

    // pos.negamax(-infinity, infinity, 2);

    return 0;
}