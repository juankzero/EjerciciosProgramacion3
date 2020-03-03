
#include "Rectangulo.h"
#include <iostream>

using namespace std;

Rectangulo::Rectangulo(void):base(0), altura(0)
{
	//base = altura = 0;
	//codigo C++
}

Rectangulo::Rectangulo(int _base, int _altura)//: base(_base), altura(_altura)
{
	setBase(_base);
	setAltura(_altura);
}

void Rectangulo::setBase(int _base) 
{
	if (_base < 0)
	{
		cout << "Error en ingreso de base" << endl;
		return;
	}

	this->base = _base;
}

void Rectangulo::setAltura(int _altura) 
{
	if (_altura < 0)
	{
		cout << "Error de ingreso en altura" << endl;
		return;
	}

	this->altura = _altura;
}

int Rectangulo::getBase(void) 
{
	return this->base;
}

int Rectangulo::getAltura(void) 
{
	return this->altura;
}

int Rectangulo::getArea(void) 
{
	return base * altura;
}

int Rectangulo::getPerimetro(void) 
{
	return 2 * (base + altura);
}