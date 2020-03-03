
#include <conio.h>


#include "Empleado.h"
#include "Socio.h"

#include <iostream>

using std::cout;

int main() 
{
	//{//definicion de ambito
	//	Persona p1("Juan", 21, 'M', "Casado");
	//	p1.getEstadoCivil();
	//}

	Persona* elementos[4];

	Persona* elementos2 = nullptr;

	int n;
	cin >> n;

	elementos2 = new Persona[n];



	elementos[0] = new Persona("Maria", 19, 'F', "Soltera");
	elementos[1] = new Empleado("Josefino", 22, 'M', "Soltero", 1001, 1200, "Full Stack");
	elementos[2] = new Socio("Allan", 35, 'M', "Casado", 5000);
	elementos[3] = new Empleado("Hugo", 25, 'M', "Soltero", 1002, 1700, "Dev. Senior");

	cout << "\n\nDatos de Elementos\n\n";

	for (int i = 0; i < 4; i++) 
	{
		elementos[i]->imprimirPersona();
	}

	Empleado* tmp = ((Empleado*)(elementos[1]));
	cout << "Puesto: " << tmp->getPuesto();


	_getch();
}