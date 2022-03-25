#include "Human.h"
//#include "Player.h"
using namespace std;

int Human::makeMove(){
     cout<<"Enter move: ";
     char m1;
     cin>>m1;
     if(m1=='r'){
        move_h = 1;
     }
     else if(m1=='s'){
        move_h = -1;
     }else if(m1=='p'){
        move_h = 0;
     }else{
        move_h = 404;
        cout<<"invalid"<<endl;
     }
     cout<<"Human move is: "<<move_h<<"  ."<<endl;
     return move_h;
}