/*!
 * \brief Operatory przypisania
 * abubak 2019.04.03
 */

#include <iostream>
#include <unistd.h>
using namespace std;

int main() {

    int
       varA = 5,
       varB = 27;

    float result[10];

    result[0] = varB/varA;
    result[1] = varB%varA;

    if(varB%varA != 0) cout << "bleee bleee" << endl;


    cout << "Rezultaty: "
        << result[0] << "\t"
        << result[1] << endl;

    /*
    for(int i = 0; i < 100; i++){
       sleep(1);
       if(i%10 == 0){
           cout <<"#"<<i<< endl;
       }
    }
    */

    return 0;   
}
