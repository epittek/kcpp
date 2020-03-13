/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.03.05
 * \brief Extern "C" C++
 * v0.01
 */

#include<iostream>
using namespace std;


void a() {}
void b() {}

extern "C" {
  void ca() {}
  void cb() {}
}

/* Zapobiegnij optymalizacji funkcji g i eg */
void h()
{
  b(); cb();
}


int main()
{
  cout <<"Samodzielna kompilacja:"<< endl;
  cout <<"  g++ -c -std=c++11 -Wall -Wextra -pedantic -o LExtern.o ../src/LExtern.cc"<< endl; 
  cout <<"Rozmontowanie/odwiklanie (diassemble):"<< endl;
  cout <<"  readelf -s LExtern.o\n" << endl;

  cout <<"Lub jesli z uzyciem cmake:"<< endl;
  cout <<"  readelf -s CMakeFiles/LExtern.dir/src/LExtern.cc.o\n"<< endl;

  cout <<"'Unmangle' nazw funkcji:"<< endl;
  cout <<"  c++filt _Z1fv"<< endl;

  return 0;                              
}
