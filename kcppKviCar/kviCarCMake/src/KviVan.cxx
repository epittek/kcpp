/* Author: Arkadiusz Bubak
   mail: arkadiusz@buabk.pl
   date: 2008.02.22, v0.01
   	     2019.02.27, v0.02
 */
 
#include "KviVan.h"
#include <iostream>
using namespace std;

//ClassImp(ClassVan);

KviVan::KviVan() {
  //cout <<"The KviVan Object has been created" << endl;
};
KviVan::~KviVan() {
  //cout <<"The KviVan Object has been destroyed" << endl;
};

void KviVan::StolePlate() {

  cout <<"I am bad descendant. I use this function to stole the plate"<< endl;

}
