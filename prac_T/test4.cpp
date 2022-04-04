//Question 2

#include<iostream>
using namespace std;


int numCratesArray[10000];

class EfficientTruckloads{
public:
int numTrucks(int numCrates, int loadSize){
if(numCrates <= loadSize){
return 1;
}


if(numCratesArray[numCrates] != 0){
return numCratesArray[numCrates];
}else{


if(numCrates%2 == 0){
numCratesArray[numCrates] = numTrucks(numCrates/2,loadSize) + numTrucks(numCrates/2,loadSize);
return numCratesArray[numCrates];
}else{
numCratesArray[numCrates] = numTrucks(numCrates/2,loadSize) + numTrucks((numCrates/2)+1,loadSize);
return numCratesArray[numCrates];
}
}
}

};

int main(){
int nc,ls;

cout<<"Enter the number of crates : ";
cin>>nc;

cout<<"Enter the load size : ";
cin>>ls;

EfficientTruckloads t;
int numOfTrucks = t.numTrucks(nc,ls);

cout<<"The number of Trucks required are : "<<numOfTrucks<<endl;

return 0;
}