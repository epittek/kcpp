/* Author: Arkadiusz Bubak
   mail: arkadiusz@buabk.pl
   date: 2008.02.22
 */
 
#ifndef KVICAR_H
#define KVICAR_H 1

class KviCar
{
 public:
  KviCar();
  ~KviCar();

  void SetPlate(int rplate)       { fPlate     = rplate; };
  void SetFakePlate(int fplate)   { fFakePlate = fplate; };
  void SetColor(int color)        { fColor     = color; };

  int GetPlate()     { return fPlate; };
  int GetFakePlate() { return fFakePlate; };
  int GetColor()     { return fColor; };

  void Print();

 private:
  int fPlate;
  int fFakePlate;
  int fColor;
};

#endif
