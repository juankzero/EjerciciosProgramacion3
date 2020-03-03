
#include <iostream>

#include "Rectangulo.h"
#include "Triangulo.h"


#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
	string a;

	Rectangulo r1;
	Rectangulo r2(6, 4);

	r1.setBase(10);
	r1.setAltura(4);

	cout << "Rectangulo 1 {base: " << r1.getBase()
		<< ", altura: " << r1.getAltura() << "}" << endl;

	cout << "Area: " << r1.getArea();
	cout << " Perimetro: " << r1.getPerimetro();

	//-------------------------

	cout << "\n\nRectangulo 2 {base: " << r2.getBase()
		<< ", altura: " << r2.getAltura() << "}" << endl;

	cout << "Area: " << r2.getArea();
	cout << " Perimetro: " << r2.getPerimetro();


	_getch();

}