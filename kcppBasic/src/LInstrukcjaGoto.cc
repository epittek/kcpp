/*!
 * \brief Goto w c++
 * abubak 2019.04.09
 */

#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
   tryAgain:           // etykieta
   cout << "Wpisz dodatnia liczbe: ";

   double dX;
   cin >> dX;

   if (dX < 0.0) goto tryAgain;

   cout << "The sqrt of " << dX << " is " << sqrt(dX) << endl;
}
