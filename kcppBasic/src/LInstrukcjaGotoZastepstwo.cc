#include <iostream>
using namespace std;

void GotoInstead(){
  cout <<"Inside function"<< endl;
  int k;
  cin >> k;
  if(k<0){
    GotoInstead();
  }
}

int main()
{
  GotoInstead();

  return 0;
}
