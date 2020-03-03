
#include <iostream>
#include "Numero.h"
#include <conio.h>

using std::cout;
using std::cin;

int main() 
{
	Numero a(9);
	Numero b(3);
	Numero c;


	/*cout << "Ingrese valor de a: ";
	cin >> a;
	cout << "\nValor de a: " << a << std::endl;*/

	c = a + b;
	c = c + 2;
	 
	Numero d; // c = 14
	d = c++; 
	cout << "c++ = " << d;// c = 14
	Numero e; //c = 15
	e = ++c; 
	cout << "++c = " << c; // c = 16


	//cout << "El resultado de la Suma es: " << c;

	
	_getch();
}