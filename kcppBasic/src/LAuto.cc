/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.02.29
 * \brief Typ auto w C++
 * v0.01
 */

#include<iostream>
#include<map>
using namespace std;

int main()
{

  // ---- sizeof -----
  auto var1 = 137;
  cout << sizeof(var1) << endl;
  //printf("%d\n", sizeof(var1));
  //printf("%d\n", sizeof(var1));   //Error
  // -------------------------------



  // ----- Inicjalizownanie stala -----
  auto varA = 137.1;  //C++11 (auto bedzie typu zmiennoprzecinkowego)
  int  varB = 137.1;  //C i C++)
  // -------------------------------



  // ----- Inicjalizownane zwracana wartoscia -----
  std::map<char, float> mapa;
  //mapa['a'] = 1.0;
  auto itA = mapa.begin(); //C++11
  std::map<char, float>::iterator itB = mapa.begin(); //C++
  // -------------------------------



  // ----- Inicjalizacja wskaznikiem -----
  double varC = 3.14;

  auto *wskA = new auto(varC);     //C++11
  double *wskB = new double(varC); //C++


  //------ cleaning
  delete wskA;
  delete wskB;

  // --------------------------------
  return 0;                 
                 
}
