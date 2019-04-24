/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Konwersja: static_cast w C++
 * v0.01
 */

#include <iostream>
#include <iomanip>
using namespace std;



int main(){
	int a = 3;
	int b = 9;
	cout << (double) a/b << endl;
	//cout << (double)(a/b) << endl;
	//double c = static_cast<double>(a) / static_cast<double>(b);
	double c = static_cast<double>(a) /b;
	//double c = static_cast<double>(a/b);
	std::cout << std::fixed << std::setprecision(2) << c << endl;

	int i = 6;
	double d1 = (double)i;               //C-style cist
	cout << d1 << endl;

	double d2 = static_cast<double>(i);  //C++ cast
	cout << d2 << endl;

	double d = 3.14159265;
	int    k = static_cast<int>(d);
	cout << k << endl;


	return 0;
}
