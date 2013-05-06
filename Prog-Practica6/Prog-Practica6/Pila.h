#ifndef CLASS_PILA
#define CLASS_PILA

#include <iostream>
using namespace std;

class Pila
{
	public:
		Pila ();
		bool Apilar (int);
		bool Desapilar ();
		bool CimaPila (int &);
		bool PilaVacia ();
		friend ostream & operator << (ostream &, const Pila &p);
		
	private:
		static const int MAX = 9;
		typedef int Vector[MAX];
		Vector datos;
		int cima;
};

#endif
