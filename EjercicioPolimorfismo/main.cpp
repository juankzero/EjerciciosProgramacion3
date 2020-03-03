

#include "Rectangulo.h"
#include "TrianguloRectangulo.h"
#include <iostream>

#include <conio.h>

using std::cout;
using std::cin;

void imprimir(Figura2D*);

int main() 
{

	Figura2D* figuras = nullptr;

	int n;
	cin >> n;

	figuras = new Figura2D[n];

	figuras[0] = new Rectangulo(8, 4);
	figuras[1] = new TrianguloRectangulo(4, 9);
	figuras[2] = new Rectangulo(3, 5);
	figuras[3] = new TrianguloRectangulo(2, 6);

	for (int i = 0; i < 4; i++) 
	{
		imprimir(figuras[i]);
	}


	_getch();
}

void imprimir(Figura2D *figura)
{
	figura->imprimirFigura();

	if (TipoFigura::TTrianguloRectangulo == figura->getTipo())
	{
		TrianguloRectangulo* tr = (TrianguloRectangulo*)figura;

		cout << "Hipotenusa: " << tr->getHipotenusa() << "\n";

	}



}