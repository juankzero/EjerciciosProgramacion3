
#include "Materia.h"

#include <iostream>
using std::cout;

Materia::Materia() 
{

	materiaBinario.open("materias.dat", ios::in | ios::out | ios::app | ios::binary);

	if (!materiaBinario)
	{
		cout << "Error de apertura en archivo de Alumnos";
	}

	materiaBinario.close();
}

void Materia::ingresarMateria() 
{

	materiaBinario.open("materias.dat", ios::in | ios::out | ios::app | ios::binary);

	MateriaRegistro nuevaMateria;

	cout << "Ingrese codigo de materia: ";
	cin >> nuevaMateria.codigoMateria;

	cout << "Ingrese nombre de materia: ";
	cin >> nuevaMateria.nombre;

	cout << "Ingrese numero de unidades valorativas: ";
	cin >> nuevaMateria.uv;

	//colocar posicion de escritura al final del archivo
	materiaBinario.seekp(0, ios::end);

	materiaBinario.write(reinterpret_cast<const char*>(&nuevaMateria), sizeof(MateriaRegistro));

	materiaBinario.close();

}

void Materia::imprimirMaterias()
{
	
	materiaBinario.open("materias.dat", ios::in | ios::binary);


	MateriaRegistro materiaLectura;

	//coloca el cursor de lectura en un byte indicado
	materiaBinario.seekg(0, ios::beg);

	materiaBinario.read(reinterpret_cast<char*>(&materiaLectura), sizeof(MateriaRegistro));

	while (!materiaBinario.eof())
	{
		cout << "Materia { codigo: " << materiaLectura.codigoMateria << ", nombre: " <<
			materiaLectura.nombre << ", uv: " << materiaLectura.uv << " }\n";

		materiaBinario.read(reinterpret_cast<char*>(&materiaLectura), sizeof(MateriaRegistro));
	}

	materiaBinario.close();

}

bool Materia::buscarMateria(int _codigoMateria) 
{

	materiaBinario.open("materias.dat", ios::in | ios::binary);

	materiaBinario.seekg(0, ios::beg);

	MateriaRegistro materiaLectura;

	materiaBinario.read(reinterpret_cast<char*>(&materiaLectura), sizeof(MateriaRegistro));

	while (!materiaBinario.eof())
	{
		if (materiaLectura.codigoMateria == _codigoMateria)
		{
			materiaBinario.close();
			return true;
		}

		materiaBinario.read(reinterpret_cast<char*>(&materiaLectura), sizeof(MateriaRegistro));

	}

	materiaBinario.close();
	return false;

}