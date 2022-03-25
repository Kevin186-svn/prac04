#ifndef ARTIFICIALPET_H
#define ARTIFICIALPET_H
#include <string>

class ArtificialPet
{
public:
 ArtificialPet();

 bool isHungry();
 void feed();
 void play(int minutes);
protected:
 bool hu;
 int fu;
};
#endif