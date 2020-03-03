
#include <iostream>
#include "EnteroGrande.h"
#include <conio.h>

using std::cout;
using std::cin;

int main() 
{
	EnteroGrande n1;

	cout << "Ingrese un numero: ";
	cin >> n1;
	cout << "El numero ingresado fue: " << n1;

	EnteroGrande n2;

	cout << "Ingrese un numero: ";
	cin >> n2;
	cout << "El numero ingresado fue: " << n2;

	EnteroGrande n3;
	n3 = n1 + n2;
	cout << "La suma es: " << n3;


	_getch();

}