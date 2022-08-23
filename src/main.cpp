#include <iostream>
#include <libchess/position.hpp>
#include <string>

int main(int argc, char **argv) {
    /* 
     * argc counts the number of command-line arguments automatically
     * argv is the array of strings that contains the arguments
     * the program below initializes a start position from fen
     * */
    int depth = 6;
    std::string fen;
    
    if (argc > 1) {
        depth = std::stoi(argv[1]);
        depth = std::max(depth, 1);
    }

    if (argc > 2) {
        for (int i = 2; i < argc; i++) {
            if (fen.empty())
                fen = std::string(argv[i]);
            else
                fen += " " + std::string(argv[i]);
        }
    } else {
        fen = "startpos";
    }

    /*
     * This is how to initialize a position
     * */
    auto pos = libchess::Position(fen);
    return 0;
}
