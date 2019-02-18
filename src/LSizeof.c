#include <iostream>
using namespace std;

int main()
{
int mm ;

        cout << "Godzina prawdy. W tym komputerze "
                << "poszczeg¢lne typy\n"
                << "maja nastepujace rozmiary w bajtach: \n"  ;

        cout << "typ char : \t" << sizeof(char) << endl ;
        cout << "typ int  : \t" << sizeof(int) << endl ;
        cout << "typ short: \t" << sizeof(short) << endl ;
        cout << "typ long : \t" << sizeof(long) << endl ;
        cout << "typ float : \t" << sizeof(float) << endl ;
        cout << "typ double : \t" << sizeof(double) << endl ;
        cout << "typ long double \t: "<< sizeof(long double)
                                                        << endl ;

        cout << "Nasz obiekt lokalny mm ma rozmiar : "
                 << sizeof(mm) << endl ;
                 
return 0;                 
                 
}
