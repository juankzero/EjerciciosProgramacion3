
#include <iostream>
#include <conio.h>
#include "Cadena.h"


using namespace std;

int main() 
{
	Cadena c;
	Cadena c2("Hola Mundo");

	cout << "Ingrese una cadena: ";
	cin >> c;

	cout << c << endl;
	cout << c2 << endl;

	_getch();
}