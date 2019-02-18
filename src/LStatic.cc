#include <iostream>
using namespace std;

int comp(int c);

int main()
{
        int a = 5, b = -10;

        cout << comp(a) << ' ' << comp(b);
        cout << "\nFunkcja zosta³a wywo³ana " << comp(0) << " razy.\n";

        return 0;
}

int comp(int c)
{
        static int ncall = 0;
        ncall++;
        if(!c)
                return ncall;
        return c;
}
