#ifndef CLASS_HANOI
#define CLASS_HANOI

#include <iostream>
using namespace std;

class Hanoi
{
	public:
		Hanoi();
		void IniciarJuego ();
		bool MoverCarta (int, int);
		bool JuegoFinalizado ();
		friend ostream & operator << (ostream &, const & Hanoi);
		
	private:
		static const int MAX_PILAS = 3;
		int numero_jugadas;
		typedef Pila VectorMazos[MAX_PILAS];
		VectorMazos mazos;
};

#endif
