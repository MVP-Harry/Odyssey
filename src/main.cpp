#include <iostream>
#include <sstream>
#include <fstream>
#include <libchess/useful_masks.hpp>
#include <libchess/position.hpp>
#include <libchess/movegen.hpp>
#include <libchess/command_line_help.hpp>
#define tricky_position "r3k2r/p1ppqpb1/bn2pnp1/3PN3/1p2P3/2N2Q1p/PPPBBPPP/R3K2R w KQkq - 0 1"
using namespace libchess;

int main(int argc, char **argv) {
    
    // initialzing masks
    init_masks();

    // command line
    command_line_help();

    // testing
    return 0;
}