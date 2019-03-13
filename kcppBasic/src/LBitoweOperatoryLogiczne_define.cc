#include <iostream>
using namespace std;

void printBinary(const unsigned char val) {
   for(int i = 7; i >= 0; i--)
     if(val & (1 << i))
       //(1 << 0) "wstawia 1 na kolejnych pozycjach"
       //(zmienna << ilosc_miejsc)
       cout << "1";
     else
       cout << "0";
}

#define PR(STR, EXPR) \
cout << STR <<"\t"; printBinary(EXPR); cout << endl;

int main() {
   unsigned int getval;

   for(int i = 0; i<= 10; i++) {
      PR("a in binary: ", i);
      //cout << i <<"\t";
      //printBinary(i);
      //cout << endl;
     }


   //PR("a in binary: ", a);

}
