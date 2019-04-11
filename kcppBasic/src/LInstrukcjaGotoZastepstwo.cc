#include <iostream>
using namespace std;

void function(){
  cout <<"Inside function"<< endl;
  int k;
  cin >> k;
  if(k<0){
    function();
  }
}

int main()
{
  function();

  return 0;
}
