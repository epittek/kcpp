#include <iostream>
using namespace std;

int main()
{
   int
     varA = 5,
     varB = 27;
   
   float result[10];
   
   result[0] = varB/varA;
   result[1] = varB%varA;

   if(varB%varA != 0) cout << "bleee bleee" << endl;

   cout << "Resultaty: "
        << result[0] << "\t"
        << result[1] << endl;
   
   
}
