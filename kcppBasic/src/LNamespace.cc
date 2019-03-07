#include <iostream>
using namespace std;


namespace nasza {
	int k = 7;
}
//using namespace nasza;

int main(){
	//std::cout << "Test" << std::endl;
	cout << "Test" << endl;
	nasza::k = 9;

	return 0;
}
