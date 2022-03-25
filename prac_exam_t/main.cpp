#include <iostream>

using namespace std;

int n = 0;
int log2(int i)
{

 if (i<=1)
 {
  return n;
 }
 else{
  n++;
  return log2(i/2); //divided every time
 }
}

int main()
{
 cout<<log2(1)<<endl;
 n=0;
 cout<<log2(2)<<endl;
 n=0;
 cout<<log2(733)<<endl;
 n=0;
 cout<<log2(1026)<<endl;
}