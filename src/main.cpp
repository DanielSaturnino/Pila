/**
Daniel Manzano Saturnino
*/
# include "Pila.h"
int main()
{
	Pila p=Pila();
	p.push(2);
	p.push(3);
	p.show();
	p.pop();
	p.show();
	p.vaciarpila();
}