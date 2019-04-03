#include <iostream>
using namespace std;

int main()
{

    int
        x = 1,
        y = 2,
        z = 3;
    int result[] = {4,4,4,4};

    result[0] *= -++x*x--+-y--%++z;                 //0
    cout <<"0. "<< result[0] << endl;

    result[1] *= -(++x)*(x--)+-(y--)%(++z);         //1
    cout <<"1. "<< result[1] << endl;

    result[2] *= (-(++x))*(x--)+(-(y--))%(++z);     //2
    cout <<"2. "<< result[2] << endl;

    result[3] *= ((-(++x))*(x--))+((-(y--))%(++z)); //3
    cout <<"i3. "<< result[3] << endl;

    return 0;
}
