#pragma once

#ifndef NOTAS_H
#define NOTAS_H

#include <fstream>

using namespace std;

struct NotaRegistro
{
	char numeroCuenta[9];
	int codigoMateria;
	float nota;
};

class Nota 
{
private:
	fstream notasBinario;

public:
	Nota();
	void agregarNota();
	void actualizarPromedio(char[]);
	void modificarNota();
	void imprimirNotasAlumno(char[]);

};


#endif // !NOTAS_H
