/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.03.02
 * \brief Konwersja: dynamic_cast w C++
 * v0.01
 */

#include <iostream>
#include <iomanip>
using namespace std;

//-----------------------------
class Car {};
class Ford : public Car {};

//-----------------------------
//
//-----------------------------
struct Base { };
struct Derived : Base { };
//-----------------------------

int main(){
  Ford *fordTaurus = new Ford();
  Car *car = dynamic_cast<Car*>(fordTaurus);
     // . . .
  delete car;

  Derived d; Base *b = &d;
  //dynamic_cast<Derived*>(b); //Niepoprawne

  return 0;
}


