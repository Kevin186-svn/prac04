#include <iostream>

using namespace std;
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Avalanche.h"
int main(){

    Human h1;
    Computer c1;
     Referee r1;
    Avalanche a1;


    // for(int i=0;i<3;i++){
    //     cout<<r1.refGame(h1,c1)<<endl;
    // }
    // Player p1;
    // Player p2;
    cout<<r1.refGame(h1,c1)<<endl;
   // cout<<r1.refGame(h1,a1)<<endl;
    //cout<<rand(3)<<endl;


}