/*!
 * \brief Nawiasy w c++
 * abubak 2019.04.09
 */

#include <iostream>
using namespace std;

int main() {
  int
    var1 = 1,
    var2 = 2;
  int var3 = 0;
  int var4, var5, var6;

  {
    int var1 = 7;              //Przesloniecie poprzedniej definicji var1
    cout << var1 << endl;      //Na ekranie: 7
  }

  cout << var1 << endl;         //Na ekranie: 1

  //----------------------------------------------------   

  if(var1 > 0) {//Instrukcja: Sprawdzanie czy var1 > 0
    cout <<"Podaj nowa wartosc: ";
    cin >> var1;
  }   
}
