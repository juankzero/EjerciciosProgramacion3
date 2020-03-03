#include "Cadena.h"

#include <iostream>
#include <string>

ostream& operator<<(ostream& salida, const Cadena& c) 
{
	salida << c.data;
	return salida;
}

istream& operator>>(istream& entrada, Cadena& c)
{
	entrada.getline(c.data, c.length);
	return entrada;
}

istream& operator>>(istream& entrada, char*& c)
{
	
	return entrada;
}

Cadena::Cadena()
{
	length = 0;
	data = new char[length + 1];
	data[0] = '\0';
}

Cadena::Cadena(const char* _data)
{
	length = strlen(_data);
	data = new char[length];
	strcpy_s(data, length + 1, _data);
	
}