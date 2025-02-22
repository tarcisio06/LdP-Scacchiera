
#include "../include/Chessboard.h"

namespace chessgame

{                                   
           
    string& Chessboard::snapshot()
    {
        string s;
        // for loop rows
        int num {8};
        for (int i = 0; i < ROWS; i++)
        {
            s += num + " ";
            // for loop columns
            for (int j = 0; i < COLUMNS; j++)
            {
                Piece * p = v[i][j].get();
                if (p) s += p->getSymbol();
                else s += " ";
            }
            s += "\n";
            num--;           
        }
        s += "\nABCDEFGH";
        return s;
    }
    /*

        @brief: This private function initialize black pieces when the chessboard is created 

        @return: void

    */
    void Chessboard::initialize_black_pieces()
    {
        // initialize other Pieces in free store 
        v[0][0].reset(new Torre(BLACK,'T'))  ;
        v[0][1].reset(new Cavallo(BLACK,'C'))  ;
        v[0][2].reset(new Alfiere(BLACK ,'A')) ;
        v[0][3].reset(new Regina(BLACK,'D'))  ;
        v[0][4].reset(new Re(BLACK,'R'))  ;
        v[0][5].reset(new Alfiere(BLACK,'A'))  ;
        v[0][6].reset(new Cavallo(BLACK,'C'))  ;
        v[0][7].reset(new Torre(BLACK,'T'))  ;
        //for loop to initialize Pedones
        for (int i = 0; i < COLUMNS; i++)
        {
            v[1][i].reset(new Pedone(BLACK,'P'));
        }
            
    }
    /*

        This private function initialize white pieces when the chessboard is created 

        @return: void

    */
    void Chessboard::initialize_white_pieces()
    {
        // for loop to inizialize Pedones
        for (int i = 0; i < COLUMNS; i++)
        {
            v[6][i].reset(new Pedone(WHITE,'p'));
        }
        // initialize other Pieces in free store 
        v[7][0].reset(new Torre(WHITE,'t'));
        v[7][1].reset(new Cavallo(WHITE,'c'));
        v[7][2].reset(new Alfiere(WHITE ,'a'));
        v[7][3].reset(new Regina(WHITE,'d')) ;
        v[7][4].reset(new Re(WHITE,'r')) ;
        v[7][5].reset(new Alfiere(WHITE,'a')) ;
        v[7][6].reset(new Cavallo(WHITE,'c')) ;
        v[7][7].reset(new Torre(WHITE,'t'));
        
    }
}