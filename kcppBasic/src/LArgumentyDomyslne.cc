#include<iostream>
using namespace std;

int zwieksz(int a, int b = 1)
{
	return a + b;
}

int zmniejsz(int a, int b = 1);

int main(){

	int wynik;
	wynik = zwieksz(2, 5);
	cout << "Wywolanie zwieksz(2, 5): "<< wynik << endl;

	wynik = zwieksz(2);
	cout << "Wywolanie zwieksz(2): "<< wynik << endl;

<<<<<<< HEAD
	wynik = zmniejsz(5, 2);
	cout << "Wywolanie zmniejsz(5, 2): "<< wynik << endl;

	wynik = zmniejsz(5);
	cout << "Wywolanie zmniejsz(5): "<< wynik << endl;

	return 0;
=======
    wynik = zwieksz(2);
    cout << "Wywolanie zwieksz(2): "<< wynik << endl;
    
    wynik = zmniejsz(5, 2);
    cout << "Wywolanie zmniejsz(5, 2): "<< wynik << endl;
    
    wynik = zmniejsz(5);
    cout << "Wywolanie zmniejsz(5): "<< wynik << endl;

    return 0;
>>>>>>> abb2178225133862451651c84253b76b15b1bd32
}

int zmniejsz(int a, int b)
{
	return a - b;    
}
