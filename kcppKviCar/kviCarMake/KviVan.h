/* Author: Arkadiusz Bubak
   mail: arkadiusz@buabk.pl
   date: 2008.02.22
 */
 
#ifndef KVIVAN_H
#define KVIVAN_H 1

#include "KviCar.h"

class KviVan : public KviCar
{
 public:
  KviVan();
  ~KviVan();

  void StolePlate();

};

#endif
