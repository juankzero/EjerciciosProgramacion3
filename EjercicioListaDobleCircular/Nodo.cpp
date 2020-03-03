
#include "Nodo.h"

Nodo::Nodo() : valor(-1), siguiente(nullptr), anterior(nullptr)
{}

Nodo::Nodo(int _valor, Nodo* _anterior, Nodo* _siguiente)
{
	setValor(_valor);
	setAnterior(_anterior);
	setSiguiente(_siguiente);
}

void Nodo::setValor(int _valor)
{
	this->valor = _valor;
}

void Nodo::setSiguiente(Nodo* _siguiente)
{
	this->siguiente = _siguiente;
}

int Nodo::getValor()
{
	return this->valor;
}

Nodo* Nodo::getSiguiente()
{
	return this->siguiente;
}

void Nodo::setAnterior(Nodo* _anterior) 
{
	this->anterior = _anterior;
}

Nodo* Nodo::getAnterior() 
{
	return this->anterior;
}