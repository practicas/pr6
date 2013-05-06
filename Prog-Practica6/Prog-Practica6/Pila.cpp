#include <iostream>
#include "Pila.h"
using namespace std;

Pila::Pila ()
{
	cima = -1;
}

bool Pila::PilaVacia ()
{
	return (cima == -1);
}

bool Pila::Apilar (int x)
{
	bool ok;
	if (cima == MAX-1) //No hay espacio
		ok = false;
	else //Hay espacio y se puede apilar
	{
		cima++;
		datos[cima] = x;
		ok = true;
	}
	
	return (ok);
}

bool Pila::Desapilar (void)
{
	bool ok;
	if (cima == -1) //Pila vacia y no se puede desapilar
	ok = false;
	else //Hay elementos y es posible eliminar la cima
	{
		cima--;
		ok = true;
	}
	
	return (ok);
}

bool Pila::CimaPila (int & x)
{
	bool ok;
	if (cima == -1) //Pila vacia y no hay element en la cima
		ok = false;
	else //Hay elementos y es posible consultar la cima
	{
		x = datos[cima];
		ok = true;
	}
	
	return (ok);
}

ostream & operator << (ostream & out, const Pila& p)
{
	int x;
	Pila p2 = p;
	
	while(!p2.PilaVacia())
	{
		out << p2.CimaPila(x);
		out << ' ';
		p2.Desapilar();
	}
	
	return out;
}


