#pragma once

#ifndef ALUMNO_H
#define ALUMNO_H

#include <fstream>
using namespace std;

struct AlumnoRegistro 
{
	char numeroCuenta[9];
	char nombre[25];
	float promedio;
}; //sizeof 38 bytes

class Alumno 
{
private:
	fstream alumnosBinario;

public:
	Alumno();
	void ingresarAlumno();
	void imprimirAlumnos();
	void consultarAlumno();
	bool buscarAlumno(char[]);

	int obtenerCantidadAlumnos();

};


#endif