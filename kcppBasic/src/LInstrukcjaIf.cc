/*!
 * \brief Instrukcja if w c++
 * abubak 2019.04.09
 */

#include <iostream>
using namespace std;

int main()
{   
   int x;
   cout << "Podaj liczba calkowita: ";
   cin >> x;
   
   if(x & 1) cout <<"Liczba nieparzysta."<< endl;
    else cout <<"Liczba parzysta."<< endl;

   if(x >= 9) {
      cout <<"Jestesmy poza ukladem slonecznym."<< endl;
      cout <<"--> Pluton juz nie jest planeta."<< endl;
   } else {
      cout <<"Ziemniaku: Jestes ciagle blisko swej planety"<< endl;
   }

   return 0;
}
