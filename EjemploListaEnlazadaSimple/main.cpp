
#include "ListaEnlazadaSimple.h"
#include <conio.h>

int main() 
{
	
	ListaEnlazada lista;

	lista.agregarElemento(4);
	lista.agregarElemento(2);
	lista.agregarElemento(8);
	lista.agregarElemento(5);

	lista.imprimir();

	lista.eliminarElemento(4);
	lista.eliminarElemento(8);

	lista.imprimir();

	_getch();


}