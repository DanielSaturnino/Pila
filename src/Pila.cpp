/**
Daniel Manzano Saturnino
*/
#include "Pila.h"
/**
Constructor
Crea una pila con un 
el atributo tope apuntando a NULL
*/
Pila::Pila()
{
	this->Tope=NULL;
}
/**
Pila Vacia
@Parametros:void 
@Result:bool
Pregunta si Tope esta vacio 
si esta vacio regresa un true si no un false
*/

bool Pila::pilavacia()
{
	if(this->Tope==NULL)
		return true;
	return false;
}
/**
Push
@Parametros: int
@Result: void 
Crea un nodo que que recibe un dato y apunta a Tope
y a tope le asigna el auxiliar
*/
void Pila::push(int Dato)
{
	Nodo* aux=new Nodo(Dato,this->Tope);
	this->Tope=aux;
}
/**
Pop
@Parametros:void
@Result:int
Verifica primero si la pila esta vacia si esta vacia 
nos arroja la leyenda de que esta vacia 
si no creamos una variable de tipo dato y le asignamos 
el valor de tope a tope que apunte al siguiente de tope que sera null
y regresamos el Dato 
*/
int Pila::pop()
{	
	if(pilavacia())
	{
		std::cout<<"La pila esta vacia"<<std::endl;
		return 0;
	}
	int Dato=Tope->getDato();
	this->Tope=this->Tope->getSig();
return Dato;
}
/**
vaciarpila
@Parametros:void
@Result:void
Hace que tope apunte a NULL y pierde todo lo que exista 
y arroja la leyenda de que ha borrado la lista
*/
void Pila::vaciarpila()
{
	this->Tope=NULL;
	std::cout<<"He vasiado la lista"<<std::endl;
}
/**
show
@Parametros:void 
@Result:void
crea un nodo que apunta a tope y 
lo recorre hasta que sea diferente de NULL
y obtiene el Dato lo imprime
  y apunta al siguietne valor 

*/
void Pila::show()
{
	Nodo*aux=this->Tope;
	while(aux!=NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
}