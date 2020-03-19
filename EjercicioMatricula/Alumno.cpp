#include "Alumno.h"
#include <iostream>

using std::cout;

Alumno::Alumno()
{
	alumnosBinario.open("alumnos.dat", ios::in | ios::out | ios::app | ios::binary);

	if (!alumnosBinario)
	{
		cout << "Error de apertura en archivo de Alumnos";
	}

	alumnosBinario.close();
}

void Alumno::ingresarAlumno() 
{
	alumnosBinario.open("alumnos.dat", ios::in | ios::out | ios::app | ios::binary);

	AlumnoRegistro nuevoAlumno;

	cout << "Ingrese numero de Cuenta: ";
	cin >> nuevoAlumno.numeroCuenta;

	cout << "Ingrese nombre de alumno: ";
	cin >> nuevoAlumno.nombre;

	nuevoAlumno.promedio = 0;

	//colocar posicion de escritura al final del archivo
	alumnosBinario.seekp(0, ios::end);

	alumnosBinario.write(reinterpret_cast<const char*>(&nuevoAlumno), sizeof(AlumnoRegistro));

	alumnosBinario.close();

	cout << "Alumno agregado\n";
}

void Alumno::imprimirAlumnos() 
{
	alumnosBinario.open("alumnos.dat", ios::in | ios::binary);


	AlumnoRegistro alumnoLectura;

	//coloca el cursor de lectura en un byte indicado
	alumnosBinario.seekg(0, ios::beg);

	alumnosBinario.read(reinterpret_cast<char*>(&alumnoLectura), sizeof(AlumnoRegistro));

	while (!alumnosBinario.eof()) 
	{
		cout << "Alumno { cuenta: " << alumnoLectura.numeroCuenta << ", nombre: " <<
			alumnoLectura.nombre << ", promedio: " << alumnoLectura.promedio << " }\n";

		alumnosBinario.read(reinterpret_cast<char*>(&alumnoLectura), sizeof(AlumnoRegistro));
	}

	alumnosBinario.close();

}

int Alumno::obtenerCantidadAlumnos() 
{

	alumnosBinario.open("alumnos.dat", ios::in | ios::binary);

	long finalArchivo;

	alumnosBinario.seekg(0, ios::end);
	finalArchivo = alumnosBinario.tellg(); //obtiene el byte en el que se encuentra el cursor de lectura

	alumnosBinario.close();

	return finalArchivo / sizeof(AlumnoRegistro);


}

bool Alumno::buscarAlumno(char _numeroCuenta[]) 
{
	alumnosBinario.open("alumnos.dat", ios::in | ios::binary);

	alumnosBinario.seekg(0, ios::beg);

	AlumnoRegistro alumnoLectura;

	alumnosBinario.read(reinterpret_cast<char*>(&alumnoLectura), sizeof(AlumnoRegistro));

	while (!alumnosBinario.eof()) 
	{
		if (strcmp(alumnoLectura.numeroCuenta, _numeroCuenta) == 0)
		{
			alumnosBinario.close();
			return true;
		}

		alumnosBinario.read(reinterpret_cast<char*>(&alumnoLectura), sizeof(AlumnoRegistro));

	}

	alumnosBinario.close();
	return false;
}