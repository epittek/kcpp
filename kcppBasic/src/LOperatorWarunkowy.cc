#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Podaj liczbe calkowita:" << endl;
    cin >> x;
    cout << ( (x & 1) ? "Liczba nieparzysta." : "Liczba parzysta.") << endl;
    
    if((x & 1) ? 0 : 1) {
      cout << "Liczba parzysta -> w if"<< endl;
     } else {
      cout << "Liczba nieparzysta -> w else"<< endl;
     }

    return 0;
}
