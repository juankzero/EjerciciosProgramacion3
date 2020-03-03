#pragma once

#ifndef CADENA_H
#define CADENA_H

#include <iostream>
using namespace std;

class Cadena 
{
	friend ostream& operator<<(ostream&, const Cadena&);
	friend istream& operator>>(istream&, Cadena&);
	friend istream& operator>>(istream&, char*&);

private:
	char* data;
	int length;

public:
	Cadena();
	Cadena(const char*);

};

#endif // !CADENA_H
