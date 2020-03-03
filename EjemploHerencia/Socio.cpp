#include "Socio.h"

#include <iostream>

using std::cout;

Socio::Socio(string _nombre, int _edad, 
			char _genero, string _estado_civil,
			int _acciones) : Persona(_nombre, _edad,
				_genero, _estado_civil)
{
	setAcciones(_acciones);
	cout << "... Se construyo Socio...\n";
}

Socio::~Socio() 
{
	cout << "... Se destruyo Socio...\n";
}

void Socio::setAcciones(int _acciones) 
{
	this->acciones = _acciones;
}

int Socio::getAcciones(void) 
{
	return this->acciones;
}