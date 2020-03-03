
#include <iostream>
#include <conio.h>

using namespace std;

int potencia(int, int);

int main() 
{
	int* valorPtr;
	valorPtr = nullptr;

	int valor;
	valor = 5;

	valorPtr = &valor;

	cout << "La direccion de memoria de valorPtr: " << valorPtr;
	cout << "\nEl valor depositado en la dir de mem: " << *valorPtr;

	valor = 15;

	cout << "\nEl valor depositado en la dir de mem: " << *valorPtr;

	int b = 3;
	int e = 3;

	int* bptr = &b;
	int* eptr = &e;

	int r = potencia(b, e);

	_getch();
}

int potencia(int base, int expo) 
{
	int* bptr = &base;
	int* eptr = &expo;
	int resultado = base * base * base;
	return resultado;
}