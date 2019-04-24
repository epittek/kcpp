/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.09
 * \brief Bitowe operatory logiczne w C++
 * v0.01
 */

#include <iostream>
using namespace std;

int main() {
	int tab[] = {11,22,33,44,55}, i = 3, *p, *q;

	p = &tab[0] + 3;
	cout << "*p     = " << *p << endl;

	p = p - 2;
	cout << "*p     = " << *p << endl;

	q = tab;
	cout << "*(q+2) = " << *(q+2) << endl;
	cout << "q[2]   = " << q[2]   << endl;

	cout << "q[i]   = " << q[i] << endl;
	cout << "i[q]   = " << i[q] << endl;
	i++;
	cout << "*(i+q)   = " << *(i+q) << endl;

	return 0;
}
