/*!
 * \brief Instrukcja while w c++
 * abubak 2019.04.09
 */

#include <iostream>
using namespace std;

int main()
{   
   int i = 5;
   cout << i << endl;
   
   while(i < 10) i++; //po wykonaniu petli i = 10
   cout << i << endl;
   
   while(i++) if(i==15) break; //jeślisi wynosi 15 to przerywamy wykonywanie petli

   while(true) goto etykieta1; //skok do etykiety
   cout <<"Czy kiedykolwiek sie pojawie?"<< endl;
   
   etykieta1:

   while(i <= 20) { //wyswietla liczby 15, 16, 17, 19 i 20
     if(i==18) {
	i++; continue; 
     }
     cout << i++ <<" ";
   }
   cout << endl;
}
