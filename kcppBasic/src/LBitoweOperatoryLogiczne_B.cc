#include <iostream>
using namespace std;

void printBinary(const unsigned char val) {
   for(int i = 7; i >= 0; i--)
     if(val & (1 << i))
       cout << "1";
     else
       cout << "0";
}

#define PR(STR, EXPR) \
cout << STR <<"\t"; printBinary(EXPR); cout << endl;

int main() {
   unsigned int getval;
   unsigned char a, b;
   
   cout << "Podaj liczbe od 0 do 255: ";
   cin >> getval; a = getval;
   PR("a w bin notacji: ", a);

   cout << "Podaj liczbe od 0 do 255: ";
   cin >> getval; b = getval;
   PR("b w binarnej notacji: ", b);
   PR("a | b = ", a | b);
   PR("a & b = ", a & b);
   PR("a ^ b = ", a ^ b);
   PR("~a = ", ~a);
   PR("~b = ", ~b);


   unsigned char c = 0x5A;
   PR("c w binarnej notacji: ", c);
   a |= c;

   PR("a |= c; a = ", a);
   b &= c;
   PR("b &= c; b = ", b);
   b ^= a;
   PR("b ^= a; b = ", b);
}
