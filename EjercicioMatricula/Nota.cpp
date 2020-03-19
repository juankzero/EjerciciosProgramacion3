#include "Notas.h"


#include <iostream>
using namespace std;


Nota::Nota() 
{

	notasBinario.open("notas.dat", ios::in | ios::out | ios::app | ios::binary);

	if (!notasBinario) 
	{
		cout << "Error al intentar abrir el archivo\n";
		return;
	}

	notasBinario.close();

}

#include "Alumno.h"
#include "Materia.h"

void Nota::agregarNota() 
{
	Alumno busquedaA;
	Materia busquedaM;
	char numeroCuenta[9];
	int codigoMateria;

	do 
	{
		cout << "Ingrese numero de cuenta de Alumno: ";
		cin >> numeroCuenta;
	
	} while (!busquedaA.buscarAlumno(numeroCuenta));


	do
	{
		cout << "Ingrese codigo de materia: ";
		cin >> codigoMateria;

	} while (!busquedaM.buscarMateria(codigoMateria));
	
	float nota;

	cout << "Ingrese nota del Alumno: ";
	cin >> nota;

	NotaRegistro notaEscritura;
	strcpy_s(notaEscritura.numeroCuenta, strlen(numeroCuenta) + 1, numeroCuenta);
	notaEscritura.codigoMateria = codigoMateria;
	notaEscritura.nota = nota;

	notasBinario.open("notas.dat", ios::out | ios::app | ios::binary);

	notasBinario.seekp(0, ios::end);

	notasBinario.write(reinterpret_cast<const char*>(&notaEscritura), sizeof(NotaRegistro));

	actualizarPromedio(numeroCuenta);

	notasBinario.close();
}

void Nota::actualizarPromedio(char _numeroCuenta[]) 
{

	/*
	1. Buscar las notas del alumno con _numeroCuenta
	2. Multiplicar esa nota por las uv de la clase
		2.1 buscar la uv de la clase en materias.dat
	3. Sumar la multiplicacion de todas las notas por sus UV
	4. Dividir la sumatoria anterior entre el total de uv de todas las clases
	5. Modificar el promedio en alumnos.dat
	*/

}