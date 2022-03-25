#include "ArtificialPet.h"

 bool ArtificialPet::isHungry(){
      if(fu<0){
          return false;
      }else if(fu == 10){
          return true;
      }
          return true;
 }


 void ArtificialPet::feed(){
     int nfu;
     nfu = (10-fu)/2 + 1;
     fu = nfu;
 }



 void ArtificialPet::play(int minutes){
     int pfu;
     pfu = fu - minutes;
     fu = pfu;
 }