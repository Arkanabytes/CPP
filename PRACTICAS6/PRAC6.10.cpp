/*10. Escriu un programa per invertir els valors d'una llista.*/
/*ALEJANDRA PINTO*/
#include <iostream>
#include <list>
#include <string.h>
using namespace std;
int main ()
{
  list<int> mylist; //declaro la llista i els enters i li dic el nom my list
  for (int i=0; i<=10; ++i) mylist.push_back(i); //mitja�ant un for declaro un enter i es igual a 1 i la varible i sigui major o igual 5 push_back afegeix un componen al final de la llista
  cout << "LLISTA AL REVES: ";// li dic que em digui a la consola mostri per pantalla mi lista al reves
  for (list<int>::reverse_iterator rit=mylist.rbegin(); rit!=mylist.rend(); ++rit)
  //amb un for declaro la funcio reverse iterador i reverse begin que torna al principi i reverse final mes el increment revervese de iterador
    cout << ' ' <<*rit;
    cout << '\n';
 return 0;
}

//sizeof for a numbers

//Tabla de m�todos: clase list
//assign	asigna elementos a la lista
//back	devuelve una referencia a el �ltimo componente de la lista
//begin	devuelve un iterator al principio de la lista
//clear	elimina todos los componentes de la lista
//empty	true si la lista est� vac�a
//end	devuelve un iterator al final de la lista
//erase	elimina componentes de la lista
//front	devuelve una referencia al primer componente de la lista
//insert	inserta componentes en la lista
//max_size	devuelve el n�mero m�ximo de elementos soportados por la lista
//merge	une dos listas
//pop_back	elimina el �ltimo componente de la lista
//pop_front	elimina el primer componente de la lista
//push_back	a�ade un componente al final de la lista
//push_front	a�ade un componente al frente de la lista
//rbegin	devuelve un reverse_iterator hacia el final de la lista
//remove	elimina componentes de la lista
//remove_if	elimina condicionalmente componentes de la lista
//rend	devuelve un reverse_iterator hacia el inicio de la lista
//resize	cambia el tama�o de la lista
//reverse	pone al rev�s los componentes de la lista
//size	devuelve el n�mero de componentes en la lista
//sort	ordena la lista
//splice	uni�n de dos listas
//swap	intercambia el contenido de una lista con el de otra
//unique	elimina componentes duplicados

