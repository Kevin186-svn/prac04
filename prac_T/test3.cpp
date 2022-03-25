#include <iostream>
using namespace std;


class Animal{
public:
  virtual void print();
  string color;
 };

class Bird : public Animal{
public:
 virtual void print();
 string featherColor;
};

int main(){
 Animal a;
 Bird b;

 b.color = "white";
 //b.feathercolor= "red";

 a= b;

 cout<< a.color;
 //cout << a.featherColor;
 return 0;

}