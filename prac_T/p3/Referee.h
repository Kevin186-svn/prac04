#include <iostream>
#ifndef REFEREE_H
#define REFEREE_H
using namespace std;

#include "Player.h"
#include "Human.h"
#include "Computer.h"

class Referee
{
    public:
    Player p1;
    Player p2;
    // Human p1;
    // Computer p2;
    // Avalanche p3;
    char refGame(Player player1, Player player2);
};

#endif /* REFREE_H */