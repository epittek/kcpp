/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Tablica automatyczne w C++
 * v0.01
 */

#include <iostream>
using namespace std;

void tablice();

int main(){

	tablice();

	return 0;
}

void tablice(){
	const int i=20, j=10;
	int A[10];                 ///<tablica 10 int
	int A1[]={1,2,3,4,5,6};    ///<tablica 6 int
	int A2[6]={0};
	//int A3[6]({0,0,0,0,0,0});
	//int A4[6]({0});
	//tablica 20 znaków
	char B[i]={'a', 'b', 'c', 'd', 'e', 'f'};
	//tablica 3 znakow
	char B1[]={'g', 'h', 'i'};
	char B2[4]="abc";
	float C[i+j];i     ///<tablica 30 float
	int k = 0;
	A[0] = 1;          ///<inicj. elementu 0 wartoscia 1
	A[j-5] = 5;
	A[j-1] = A[5]+3;
	A[1] = A[0] + A[5];
	A[A[9]] = 8;
	*(A+2) = 2;
	*(A+3) =* (A+2)+1;

	for (k=0; k<10; k++){
		cout<<"A["<<k<<"]="<<*(A+k)<<endl;}
}
