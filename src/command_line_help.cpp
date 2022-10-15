#include <iostream>
#include <string>
#include <sstream>
#include <libchess/position.hpp>
#include <libchess/command_line_help.hpp>
using namespace libchess;

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


    std::cout << "Enter the position to analyze:" << std::endl;

    std::string user_input;
    std::getline(std::cin, user_input);

    std::stringstream ss(user_input);
    std::string temp, fen;
    bool first_time = true;
    while (ss >> temp) {
        if (first_time) first_time = false;
        else fen += " ";
        fen += temp;
    }

    Position pos = Position(fen);

    std::cout << "-----------------------------------------------------" << std::endl;
    std::cout << "Enter the depth:" << std::endl;
    int depth;
    std::cin >> depth;
    if (depth > 12) std::cout << "Might take a long time..." << std::endl;
    std::cout << "Calculating..." << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;

    pos.find_best_move(depth, 300);

}