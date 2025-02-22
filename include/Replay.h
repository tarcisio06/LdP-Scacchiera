/*

    @author: Cavinato Enrico
    @date: 2021-01-05

*/

#ifndef REPLAY_H
#define REPLAY_H

#include <iostream>
#include "Chessboard.h"


namespace chessgame 
{
    class Replay
    {
        Chessboard cboard;    
    public:
        Replay();
        void print_onscreen(const string&);
        void print_on_file(std::ifstream& ,std::ofstream&);
    };
}


#endif