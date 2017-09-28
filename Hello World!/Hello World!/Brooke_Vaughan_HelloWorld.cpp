/*
Brooke Vaughan - 9/22/17 Period 1

Assignment Name : Display Text

Introduction into C++ IDE Visual studios
Create New Project & Display Text to Console
*/

//Libraries
#include <iostream>
#include <conio.h>

//Namespaces
using namespace std;

//Functions()
void pause() {
	cout << "Press any key to continue . . .";
	while(!_kbhit());
	_getch();
	cout << "\n";
}

//MAIN
void main() {
	// Display Text
	cout << "Hello World!" << endl;
	;cout << "Brooke Vaughan - Period 1 " << endl;
	;pause();
	// no system (""); commands anymore
}