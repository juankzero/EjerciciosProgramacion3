#include "Alumno.h"
#include "Materia.h"
#include <conio.h>
#include <iostream>

using std::cout;

int main() 
{
	Alumno alumno;
	Materia materia;

	/*alumno.ingresarAlumno();
	alumno.ingresarAlumno();
	alumno.ingresarAlumno();
	alumno.ingresarAlumno();

	alumno.imprimirAlumnos();*/

	cout << "Cantidad de Alumnos: " << alumno.obtenerCantidadAlumnos() << endl;


	/*materia.ingresarMateria();
	materia.ingresarMateria();
	materia.ingresarMateria();

	materia.imprimirMaterias();*/

	//cout << "Cantidad de Alumnos: " << alumno.obtenerCantidadAlumnos() << endl;

	_getch();
}