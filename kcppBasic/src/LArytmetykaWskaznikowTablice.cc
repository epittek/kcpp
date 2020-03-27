/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Arytmetyka wskaznikow (tablice) w C++
 * v0.01
 */

//#include <stdio.h>
#include <iostream>
using namespace std;

#define ROZMIAR 10

//--- dostep za pomoca indeksu --------------------------------------
void funA(){
  
  cout <<"Dostep za pomocą indeksu"<< endl;
  cout <<"----------------------------"<< endl;

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

  cout <<"Dostep za pomocą adresu i indeksu"<< endl;
  cout <<"----------------------------"<< endl;

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



int main(int argc, char *argv[]){

  cout <<"Rozmiar tablicy zdefiniowany przez dyrektywę preprocesora"<< endl;
  cout <<"Rozmiar: "<< ROZMIAR << endl;

  /* if (argv[1] == "yes");              // Wrong, compares two pointers
   * if (strcmp(argv[1], "yes") == 0);   // This compares what the pointers point to
   * if (std::string(argv[1]) == "yes"); // Works fine
   * if (argv[1] == std::string("yes")); // Works fine */
  if(argc == 2){
    if(argv[1] == string("funA")) funA();
    if(argv[1] == string("funB")) funB();
  }else{
    cout <<"Podaj jako argument: [funA|funB]"<< endl; 
  }
	return 0;
}
