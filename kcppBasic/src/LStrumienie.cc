/*!
 * \brief Strumienie w c++
 * abubak 2019.04.03
 */

#include <iostream>
using namespace std;

int main(){

    cout <<"Test standardowego strumienia"<< endl;
    cerr <<"Test strumienia bledow"<< endl;

    int wejscie;

    cout <<"Podaj wartosc: ";
    cin >> wejscie;
    cout <<"Wpisales: "<< wejscie << endl;

    return 0;
}
