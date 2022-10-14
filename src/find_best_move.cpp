#include <libchess/position.hpp>
#include <chrono>
#include <iostream>
#include <string.h>
using namespace libchess;
using namespace std::chrono;

Move Position::find_best_move(int depth) {
    nodes = 0;
    int score = 0;

    milliseconds starttime = duration_cast<milliseconds> (
        system_clock::now().time_since_epoch()
    );
    
    // resetting stuff
    ply = 0;
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
            
            milliseconds nowtime = duration_cast<milliseconds> (
                system_clock::now().time_since_epoch()
            );
            // print search info
            if (score > -mate_value && score < -mate_score)
                printf("info score mate %d depth %d nodes %lld time %d pv ", -(score + mate_value) / 2 - 1, current_depth, nodes, nowtime - starttime);
            
            else if (score > mate_score && score < mate_value)
                printf("info score mate %d depth %d nodes %lld time %d pv ", (mate_value - score) / 2 + 1, current_depth, nodes, nowtime - starttime);   
            
            else
                printf("info score cp %d depth %d nodes %lld time %d pv ", score, current_depth, nodes, nowtime - starttime);
            
            std::cout << std::endl;
            // loop over the moves within a PV line
            for (int count = 0; count < pv_length[0]; count++)
            {
                // print PV move
                std::cout << pv_table[0][count].print_move() << " ";
            }
            std::cout << std::endl;
            
        }
    }
    
    // printf("###############\n");
    // std::cout << "BEST MOVE IS" << std::endl;
    // pv_table[0][0].print_move();
    // printf("###############\n");

    return pv_table[0][0];
}