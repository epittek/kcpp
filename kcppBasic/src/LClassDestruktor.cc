


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
 