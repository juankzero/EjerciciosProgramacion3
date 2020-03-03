#pragma once

#ifndef ENTERO_GRANDE_H
#define ENTERO_GRANDE_H

#define LIMITE 50

#include <iostream>

class EnteroGrande 
{
	friend std::istream& operator>>(std::istream&, EnteroGrande&);
	friend std::ostream& operator<<(std::ostream&, const EnteroGrande&);
	friend EnteroGrande& operator+(const EnteroGrande&, const EnteroGrande&);

private:
	int* iValor;
	char* cValor;

public:
	EnteroGrande();

};

#endif