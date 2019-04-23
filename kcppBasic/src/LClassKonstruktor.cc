#include <iostream>
using namespace std;

class A 
{
 public:
   A() {};
   A(int zmienna);
   int fLicznik;
};

A::A(int zmienna) {
    fLicznik = zmienna;
}

int main()
{   
    A objektA;
    A objektB(7);
    A *objektC = new A(9);
   
    cout << objektB.fLicznik  << endl;
    cout << objektC->fLicznik << endl; 
}
