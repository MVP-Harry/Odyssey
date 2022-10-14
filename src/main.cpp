/* 
 * The below program initializes a position using fen
 * and calculate the perft value of the current position
*/

#include <chrono>
#include <iostream>
#include <libchess/useful_masks.hpp>
#include <libchess/position.hpp>
#include <libchess/movegen.hpp>
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

    int depth = 6;
    std::string fen;

    if (argc > 1) {
        depth = std::stoi(std::string(argv[1]));
        depth = std::max(depth, 1);
    }

    if (argc > 2) {
        for (int i = 2; i < argc; i++) {
            if (fen.empty()) {
                fen = std::string(argv[i]);
            } else {
                fen += " " + std::string(argv[i]);
            }
        }
    } else {
        fen = "startpos";
    }

    auto pos = libchess::Position(fen);

    std::cout << pos << std::endl;
    std::cout << std::endl;


    pos.find_best_move(10);
    // pos.negamax(-infinity, infinity, 2);

    return 0;
}