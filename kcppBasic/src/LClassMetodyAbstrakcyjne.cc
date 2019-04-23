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
