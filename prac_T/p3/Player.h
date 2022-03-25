#ifndef PLAYER_H
#define PLAYER_H

//#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Avalanche.h"

//class C:public A, public B
class Player: public Human, public Computer, public Avalanche {

    public:
    int Player_move;
    Player( int Player_move);
    int P_make_move();
//    int
//    public:
        // virtual std::string toString();

};

#endif /* PLAYER_H */