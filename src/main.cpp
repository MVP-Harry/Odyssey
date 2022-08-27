/* 
 * The below program initializes a position using fen
 * and calculate the perft value of the current position
*/

#include <chrono>
#include <iostream>
#include <libchess/position.hpp>

int main(int argc, char **argv) {
    int depth = 6;
    std::string fen;

    // argc is the number of arguments that the main function takes
    // argc is automatically counted
    // argv is a string array that contains all the command-line arguments

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

    // DONE: fix the build issue where I can't initialize a position using a fen
    // libchess::Position pos = libchess::Position("startpos");
    auto pos = libchess::Position(fen);

    std::cout << pos << std::endl;
    std::cout << std::endl;

    for (int i = 0; i <= depth; ++i) {
        const auto t0 = std::chrono::high_resolution_clock::now();
        const auto nodes = pos.perft(i);
        const auto t1 = std::chrono::high_resolution_clock::now();
        const auto dt = std::chrono::duration_cast<std::chrono::milliseconds>(t1 - t0);

        std::cout << "depth " << i;
        std::cout << " time " << dt.count();
        std::cout << " nodes " << nodes;
        if (dt.count() > 0) {
            const std::uint64_t nps = nodes / dt.count() * 1000;
            std::cout << " nps " << nps;
        }
        std::cout << std::endl;
    }

    return 0;
}
