/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: ~Destruktor w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class A 
{
   
 public:
   A(int zmienna);
   ~A();

   int fLicznik;
};

A::A(int zmienna){
   fLicznik = zmienna;
}
        
A::~A(){
   cout <<"Obiekt objectC zostal zniszczony"<< endl;
}

int  main(){
   A *obiektC = new A(9);
        
   cout << obiektC->fLicznik << endl; 
 
   delete obiektC;  //sprawdzic co sie stanie gdy zakomentujemy ta linie
}
 
