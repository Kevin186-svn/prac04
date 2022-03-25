#ifndef FURBY_H
#define FURBY_H
#include "ArtificialPet.h"

class Furby: public ArtificialPet
{
   public:
      Furby();

      void playing(int minutes);
      void dance(int minutes);

};
#endif