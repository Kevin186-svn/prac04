#include "Player.h"
#include "Referee.h"

using namespace std;


char Referee::refGame(Player player1, Player player2){
     char chp;

     int player1_move = player1.makeMove();
     int player2_move = player2.makeMove();
     // cout<<"Human move is :"<<player1_move<<"   ."<<endl;
     // cout<<"Computer move is :"<<player2_move<<"   ."<<endl;
     int ch;
     ch = player1_move+player2_move;
     if(ch == 1){
          if(player1_move == 0){
             cout<<"Human win"<<endl;
             chp = 'W';
          }else{
             cout<<"Compoter win"<<endl;
             chp = 'L';
          }
     }else if(ch == 0){
          if(player1_move == 0 && player2_move == 0){
             cout<<"TTTTTTTTTTT"<<endl;
             chp = 'T';
          }
          else{
             if(player1_move == 1){
                cout<<"Human win"<<endl;
                chp = 'W';
             }else{
                cout<<"Compoter win"<<endl;
                chp = 'L';
             }
          }
     }else if(ch == -1){
          if(player1_move == -1){
             cout<<"Human win"<<endl;
             chp = 'W';
          }else{
             cout<<"Compoter win"<<endl;
             chp = 'L';
          }
     }else if(ch == 2){
          cout<<"TTTTTTTTTTT"<<endl;
          chp = 'T';
     }else if(ch == -2){
          cout<<"TTTTTTTTTTT"<<endl;
          chp = 'T';
     }else{
          cout<<"EEEEEEEEE"<<endl;
          chp = 'E';
     }
    return chp;

}
