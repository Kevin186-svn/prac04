#ifndef COMPUTER_H
#define COMPUTER_H

//#include "Player.h"
#include <iostream>

using namespace std;


class Computer//: public Player
{
    public:
        int move_c;
        int makeMove();
        //int makeMove_RandomComputer();
};


#endif /* COMPUTER_H */