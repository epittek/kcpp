#include<iostream>
using namespace std;

void swapA(int a, int b) {
	cout << "\n---> Przez wartosc:"<< endl;
	int temp = a;
	a = b;
	b = temp;    
}

void swapB(int &a, int &b) {
	cout << "\n---> Przez referencje:"<< endl;
	int temp = a;
	a = b;
	b = temp;
}

int main(){

	int A = 4;   
	int B = 6;
	cout <<"Przed: A = "<< A <<" B = "<< B << endl;
	swapA(A, B);
	cout <<"Po:    A = "<< A <<" B = "<< B << endl;
	swapB(A,B);    
	cout <<"Po:    A = "<< A <<" B = "<< B << endl;

	return 0;
}
