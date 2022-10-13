#include <libchess/position.hpp>
#include <iostream>
#include <string.h>
using namespace libchess;

void Position::find_best_move(int depth) {
    int score = 0;
    
    // resetting stuff
    follow_pv = 0;
    score_pv = 0;
    memset(pv_length, 0, sizeof(pv_length));
    memset(his_moves, 0, sizeof(his_moves));

    for (int i = 0; i < 64; i++)
        for (int j = 0; j < 64; j++)
            pv_table[i][j] = Move();
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 64; j++)
            killer_moves[i][j] = Move();
    
    int alpha = -infinity;
    int beta = -infinity;

    for (int current_depth = 1; current_depth <= depth; current_depth++) {

        follow_pv = 1;
        score = negamax(alpha, beta, current_depth);

        if ((score <= alpha) || (score >= beta)) {
            alpha = -infinity;    
            beta = infinity;      
            continue;
        }
        
        // set up the window for the next iteration
        alpha = score - 50;
        beta = score + 50;

        if (pv_length[0])
        {
            printf("#################\n");
            std::cout << "BEST CONTINUATION" << std::endl;
            printf("#################\n");
            for (int count = 0; count < pv_length[0]; count++) {
                // print PV move
                std::cout << (pv_table[0][count]) << " ";
            }
            std::cout << "\n";
        }
    }
    
    printf("###############\n");
    std::cout << "BEST MOVE IS" << std::endl;
    std::cout << pv_table[0][0] << std::endl;
    printf("###############\n");
}