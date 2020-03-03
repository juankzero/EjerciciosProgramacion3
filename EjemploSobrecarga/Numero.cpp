#include "Numero.h"
#include <iostream>

Numero::Numero(): valor(0)
{}

std::ostream& operator<<(std::ostream& out, const Numero& n) 
{
	out << n.valor;
	return out;
}

std::istream& operator>>(std::istream& in, Numero& n) 
{
	in >> n.valor;
	return in;
}

Numero& operator+(const Numero& a, const Numero& b) 
{
	Numero suma;

	suma.valor = a.valor + b.valor;

	return suma;
}

Numero& operator+(Numero& a, const int& b) 
{
	Numero suma;
	suma.valor = a.valor + b;

	return suma;
}

Numero::Numero(int _valor) : valor(_valor)
{}

Numero& Numero::operator++() //preincremento
{
	this->valor = this->valor + 1;
	return *this;
}

Numero& Numero::operator++(int) //posincremento
{
	Numero resultado = *this;

	this->valor = this->valor + 1;

	return resultado;
}