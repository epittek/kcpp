#include <iostream>
using namespace std;

class A 
{   
 public:
   A(int zmiennaA, int zmiennaB);
   A(int zmiennaA, int zmiennaB, int zmiennaC);
   
   int fLicznikA;
   int fLicznikB;
   int fLicznikC;
};

A::A(int zmiennaA, int zmiennaB) : fLicznikA(zmiennaA), fLicznikB(zmiennaB)
{}

//Porównanie:
A::A(int zmiennaA, int zmiennaB, int zmiennaC){
  fLicznikA = zmiennaA;
  fLicznikB = zmiennaB;
  fLicznikC = zmiennaC;
}

int main()
{
   A *obiektN = new A(7, 4, 5);
   cout << obiektN->fLicznikA <<"\t"
        << obiektN->fLicznikC << endl;
   
   A *obiektM = new A(3, 6);
   cout << obiektM->fLicznikA <<"\t"
        << obiektM->fLicznikB << endl;
}  

