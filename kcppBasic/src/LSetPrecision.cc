// setprecision example
#include <iostream>
#include <iomanip>
//#include <math.h>
using namespace std;

int main(){

	double f = 3.141592653589793238462643;
	//double f = M_PI; // wykorzystanie pi z biblioteki math.h
	cout << setprecision (5) << f << endl;
	cout << setprecision (9) << f << endl;
	cout << fixed;
	cout << setprecision (5) << f << endl;
	cout << setprecision (10) << f << endl;

	return 0;
}
