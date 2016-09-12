/**
Daniel Manzano Saturnino
Descripicion:
Esta clase crea una pila con los metodos
de push,pop, vaciar pila y mostrar 
Atributos:
Nodo* Tope
*/
#include "Nodo.h"

class Pila
{
public: 
	Nodo* Tope;
	Pila();
	int pop();
	void push(int Dato);
	void show();
	bool pilavacia();
	void vaciarpila();
};