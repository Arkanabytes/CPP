/*9. Escriu un programa per trobar el valor màxim i mínim d'una llista. Utilitza la llista de l'ex4.
/*Alejandra Pinto*/
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;
int main ()
{ 
	list<int> mylist = {1, 99999, 1789, 2035, 1899, 1456, 2013, 2016, 1458, 2458, 1254, 1472}; 
    int maxim, minim; 
	list<int> :: iterator it; 
	maxim = *max_element(mylist.begin(), mylist.end());
	minim = *min_element(mylist.begin(), mylist.end());
	cout << "El major: " << maxim << endl;
  	cout <<"El menor: " << minim << endl;

  return 0;
}

//  list<int> vec {1789, 2035, 1899, 1456, 2013, 2016, 1458, 2458, 1254, 1472};
 // vector<int>iterator vec = minmax_element(begin(vec), end(vec));
//  cout << "Minim es: " <<distance(begin(vec), vec);


/*	int A[10]={1789, 2035, 1899, 1456, 2013, 2016, 1458, 2458, 1254, 1472};// declaro els vectors
    int major=A [0], menor= A[0];//declaro els vectors major i menor
    for (int x = 0; x <10; x++){ //mitjaçant un for
    	if (A[x]>major) major= A [x];
    	if (A[x]<menor) menor= A [x];}
	cout <<"El numero mes gran es: "<<major <<endl;
	cout <<"El numero mes petit es: "<<menor;
	return 0;
}*/
//sizeof for a numbers

//Tabla de métodos: clase list
//assign	asigna elementos a la lista
//back	devuelve una referencia a el último componente de la lista
//begin	devuelve un iterator al principio de la lista
//clear	elimina todos los componentes de la lista
//empty	true si la lista está vacía
//end	devuelve un iterator al final de la lista
//erase	elimina componentes de la lista
//front	devuelve una referencia al primer componente de la lista
//insert	inserta componentes en la lista
//max_size	devuelve el número máximo de elementos soportados por la lista
//merge	une dos listas
//pop_back	elimina el último componente de la lista
//pop_front	elimina el primer componente de la lista
//push_back	añade un componente al final de la lista
//push_front	añade un componente al frente de la lista
//rbegin	devuelve un reverse_iterator hacia el final de la lista
//remove	elimina componentes de la lista
//remove_if	elimina condicionalmente componentes de la lista
//rend	devuelve un reverse_iterator hacia el inicio de la lista
//resize	cambia el tamaño de la lista
//reverse	pone al revés los componentes de la lista
//size	devuelve el número de componentes en la lista
//sort	ordena la lista
//splice	unión de dos listas
//swap	intercambia el contenido de una lista con el de otra
//unique	elimina componentes duplicados
