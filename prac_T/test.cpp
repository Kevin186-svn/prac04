#include <iostream>

using namespace std;
class Human
{
    public:
        int hop;
        // int get(void);
        // void set(int o);
};

class Computer
{
    public:
        int cop;
};

class Referee
{
    public:
    int h_op;
    int c_op;
    // int Rock = 1;
    // int Scissors = -1;
    // int Paper = 0;
    int get(void);
    void set(int h, int c);
    void judgment(int h, int c);
};

int Referee::get(void)
{
    return h_op+c_op;
}

void Referee::set( int h, int c){
    h_op = h;
    c_op = c;

}

void Referee::judgment(int h, int c){
    h_op = h;
    c_op = c;
    if(h==c){
    cout<<"Player choose: "<<h<<endl;
    cout<<"Computer choose: "<<c<<endl;
    cout<<"dogfall"<<endl;
    }else if(h + c == 0){
    cout<<"Player choose: "<<h<<endl;
    cout<<"Computer choose: "<<c<<endl;
    cout<<"Rock Win"<<endl;
    }
    else if(h + c == 1){
    cout<<"Player choose: "<<h<<endl;
    cout<<"Computer choose: "<<c<<endl;
    cout<<"Paper Win"<<endl;
    }
    else if(h + c == -1){
    cout<<"Player choose: "<<h<<endl;
    cout<<"Computer choose: "<<c<<endl;
    cout<<"Scissors Win"<<endl;
    }

}
int main(){

    Human h1;
    Computer c1;
    Referee r1;
    cout<<"Enter your choose 1.Rock 2.Scissors 3.Paper:";
    cin>>h1.hop;
    // Rock = 1; Scissors = -1; Paper = 0;
    if(h1.hop==1){
        h1.hop = 1;
    }
    else if(h1.hop==2){
        h1.hop = -1;
    }
    else if(h1.hop==3){
        h1.hop = 0;
    }
    cout<<h1.hop<<endl;
    c1.cop=rand()%3;
    cout<<c1.cop<<endl;
    r1.judgment(h1.hop, c1.cop);



}