#include "ListaDobleCircular.h"

ListaDobleCircular::ListaDobleCircular() : primero(nullptr), ultimo(nullptr)
{}

bool ListaDobleCircular::estaVacia() 
{
	return primero == nullptr;
}

void ListaDobleCircular::agregarElemento(int _valor) 
{
	Nodo* nuevo = new Nodo(_valor, nullptr, nullptr);

	if (estaVacia())
	{
		primero = ultimo = nuevo;
		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
	else
	{
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);

	}

}