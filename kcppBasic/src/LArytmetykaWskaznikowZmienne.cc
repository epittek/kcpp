#include <iostream>
#include <stdio.h>
#include <LConversion.h>
using namespace std;

int main()
{ 
  int *wsk_int;
  float x;
  int c;
  int b;
  int a;
  //Rozne sposoby zapisu nowej wartosci do zmiennej b za pomoca wskaznika na b i sasiadujace zmienne


  // Wyswieltlenie adresow zmiennych
//  printf(" \n Adres zmiennej A = %u ", &a);
	  cout <<"Adres zminnej A: "<< &a << endl;
	  cout <<"Adres zminnej B: "<< &b << endl;
	  cout <<"Adres zminnej C: "<< &c << endl;
	  cout <<"Adres zminnej X: "<< &x << endl;
	  cout <<"Adres zminnej WSK_INT: "<< &wsk_int << endl;


  a = b = c = 0; 
  cout <<"1. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  
  b = 10; 
  cout <<"2. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  
  wsk_int = &b;
  *wsk_int = 20;
  cout <<"3. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  
  wsk_int = &a;
  *(wsk_int-1) = 30;
  cout <<"4. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  
  *(&a - 1) = 40; 
  cout <<"5. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  
  *(&c + 1) = 50;
  cout <<"6. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  
  *( (int*)&x + 2) = 60;
  cout <<"7. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  
  *(int*)( &x + 1) = 70;
  cout <<"8. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  
  *((int*)&wsk_int - 2) = 80;
  cout <<"9. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  
   *(int*) (&wsk_int - 1) = 90;
  cout <<"10. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
   return 0;
}
