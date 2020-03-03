#pragma once

#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include "Nodo.h"

class ListaDobleCircular 
{
private:
	Nodo* primero;
	Nodo* ultimo;

public:
	ListaDobleCircular();

	bool estaVacia();
	void agregarElemento(int); //agrega al final
	void insertarElemento(int, int); //insertar en posicion

	void eliminarElemento(int);

	void imprimir();
	void imprimirReversa();

};

#endif // !LISTADOBLE_H
