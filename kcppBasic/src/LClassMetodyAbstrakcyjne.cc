/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: Metody abstrakcyjne w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class Figura
{   
 public:
   virtual void Narysuj() = 0;   
};

//------------------------------------------------------------------
class Trojkat : public Figura 
{  
 public:
   void Narysuj() {
      cout << "Przepis na narysowanie trojkata" << endl;
   }
};

//------------------------------------------------------------------
class Kwadrat : public Figura 
{  
 public:
   void Narysuj() {
      cout << "Przepis na narysowanie kwadrata" << endl;
   }
};

//------------------------------------------------------------------
class Prostokat : public Figura 
{  
 public:
   void Narysuj() {
      cout << "Przepis na narysowanie prostokata" << endl;
   }
};



//------------------------------------------------------------------
int main()
{ 
   Kwadrat *objKwadrat = new Kwadrat();
   objKwadrat->Narysuj();  

   //Figura fig;    //ERROR
}
