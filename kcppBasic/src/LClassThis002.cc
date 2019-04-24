/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: This w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class Licznik 
{

  public:
    //   Licznik() : fN(0) { };
    Licznik& Zwieksz() {                                   // (1)
      ++fN;
      return *this; 
    }          

    Licznik& Ustaw(int n) { this->fN = n; return *this; }   // (1) (3)
    int Pokaz() { return fN; }

  private:
    int fN;
};


int main()
{
  Licznik obiekt;
  cout << obiekt.Ustaw(5).Zwieksz().Pokaz() << endl;         // (2)
}
