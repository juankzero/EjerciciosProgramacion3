
#include <iostream>

int main() 
{
	
	std::cout << "*** S O L I C I T U D  D A T O S ***";

	char nombreCompleto[25];
	int edad;
	char carrera[20];

	std::cout << "Ingrese su nombre: ";
	std::cin >> nombreCompleto;

	std::cout << "Ingrese su edad: ";
	std::cin >> edad;

	std::cout << "Ingrese su carrera: ";
	std::cin >> carrera;

	std::cout << "Alumno { nombre: " << nombreCompleto << ", edad: "
		<< edad << ", carrera: " << carrera << " }\n";

}
