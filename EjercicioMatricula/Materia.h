#pragma once
#ifndef MATERIA_H
#define MATERIA_H

#include <fstream>
using namespace std;

struct MateriaRegistro
{
	int codigoMateria;
	char nombre[20];
	int uv;
}; //sizeof 28 bytes

class Materia
{
private:
	fstream materiaBinario;

public:
	Materia();
	void ingresarMateria();
	void imprimirMaterias();
	void consultarMateria();
	bool buscarMateria(int);

};



#endif