#include "Computer.h"
//#include "Player.h"
using namespace std;

int Computer::makeMove(){
     int r;
     r = rand()%100;
     if(r < 33){
        move_c = 1;
     }else if(r > 33 && r < 66){
        move_c = 0;
     }else{
        move_c = -1;
     }
     cout<<"Computer move is: "<<move_c<<"  ."<<endl;
     return move_c;
}