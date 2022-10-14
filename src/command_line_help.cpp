#include <iostream>
#include <libchess/command_line_help.hpp>

void command_line_help() {
    std::cout << R"(
          ___      _
         / _ \  __| |_   _ ___ ___  ___ _   _
        | | | |/ _` | | | / __/ __|/ _ \ | | |
        | |_| | (_| | |_| \__ \__ \  __/ |_| |
         \___/ \__,_|\__, |___/___/\___|\__, |
                     |___/              |___/
    )" << std::endl;

    std::cout << "Odyssey is a chess engine written in C++" << std::endl;
    std::cout << "Author: MVP_Harry" << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;


    std::cout << "Enter commands to continue:" << std::endl;
    std::cout << "Analyze (A) - Odyssey will analyze a given position at specified depth (8 by default)" << std::endl;
    std::cout << "Display (D) - Odyssey will display the current position (starting position by default)" << std::endl;
    std::cout << "Help (H) - Odyssey will display help message" << std::endl;
    std::cout << "New (N) - Odyssey will start new game" << std::endl;
}