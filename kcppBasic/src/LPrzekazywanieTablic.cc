#include <iostream>
using namespace std;

//---------------------------------
void przekaz1D(int tab[]){ //Przekazywanie tablic 1D
    for (int i = 0; i<6; i++){
        cout << i << "\t" << tab[i] << endl;
}
}


//--------------------------------
void przekaz2D(int tab[3][3]) {//Przekazywanie tablic 2D
	for (int i = 0; i<3; i++){
		for (int j = 0; j<3;j++) {
			cout <<"("<< i <<", "<< j <<")\t"<< tab[i][j] << endl;
		}
	}
}




int main() {

	int tablica1D[6] = {1,2,3,4,5,6};
 
    // nazwa tablicy to wskaźnik na tablica[0]
    przekaz1D(tablica1D);


    //--------------------------------------
	int tablica2D[3][3];

	//Wypelnienie tablicy 2D
	for (int i = 0; i<3; i++){
		for (int j = 0; j<3;j++){
			tablica2D[i][j] = i+j;
		}
	}
	przekaz2D(tablica2D);

	return 0;
}
