#include <iostream>
#include <string>
using namespace std;

int main(){

	//https://pl.wikibooks.org/wiki/C%2B%2B/String

	string napis1;
	napis1 = "text";

	//inicjalizowanie łańcucha znaków w miejscu jego tworzenia
	string napis2( "text" );

	//operator przypisania
	string napis3 = "text";

	cout << napis1 << endl
 		 << napis2 << endl
		 << napis3 << endl;

	string napis4(10,'X');

	cout << napis4 << endl;
	return 0;
}
