
#include "Empleado.h"

#include <iostream>

using std::cout;

Empleado::Empleado(string _nombre, int _edad, 
					char _genero, string _estado_civil,
					int _codigo, float _salario, 
					string _puesto): Persona(_nombre, _edad, _genero, _estado_civil)
{
	/*setNombre(_nombre);
	setEdad(_edad);
	setGenero(_genero);
	setEstadoCivil(_estado_civil);*/
	setCodigo(_codigo);
	setSalario(_salario);
	setPuesto(_puesto);

	cout << "... Se construyo Empleado...\n";
}

Empleado::~Empleado() 
{
	cout << "... Se destruyo Empleado...\n";
}

void Empleado::setCodigo(int _codigo) 
{
	this->codigo = _codigo;
}

void Empleado::setSalario(float _salario) 
{
	this->salario = _salario;
}

void Empleado::setPuesto(string _puesto) 
{
	this->puesto = _puesto;
}

int Empleado::getCodigo() 
{
	return this->codigo;
}

float Empleado::getSalario() 
{
	return this->salario;
}

string Empleado::getPuesto() 
{
	return this->puesto;
}