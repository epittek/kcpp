//#include <stdio.h>
#include <iostream>
using namespace std;

#define ROZMIAR 10

//--- dostep za pomoca indeksu --------------------------------------
void funA(){

	int tab[ROZMIAR];
	int i; 

	for(i = 0; i < ROZMIAR; i++) {
		cout <<"Wpisz wartosc: ";
		cin >> tab[i];
		//scanf("%d", &tab[i]);
		tab[i] = 2 * tab[i];  // tab[i] *= 2;
		cout <<"Tab["<<i<<"] = "<< tab[i] << endl;
		//printf("Tab[%d] = %d \n", i+1 , tab[i]);
	}
}


//--- dostep za pomoca adresu i indeksu ----------------------------
void funB(){

	int tab[ROZMIAR];
	int i; 
	int k;
	for(i = 0; i < ROZMIAR; i++) {

		//scanf("%d", tab+i);      //&*(tab+i) == tab+i
		cout <<"Wpisz wartosc: ";
		cin >> *(tab+i);
		*(tab+i) = 2 * *(tab+i);  // tab[i] *= 2;
		cout <<"Tab["<<i<<"] = "<< *(tab+i) << endl;
		//printf("Tab[%d] = %d \n", i+1 , *(tab+i));
	}
}



int main(){
	funA();

	return 0;
}
