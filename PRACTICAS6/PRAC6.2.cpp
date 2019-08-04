/*2. Escriu un programa per sumar els valors d'una llista.
La llista a sumar ha de contenir: 1,2,3,4,5,6,7,8,9,10,11,12.*/
/*ALEJANDRA PINTO*/
#include <iostream>
#include <list>
using namespace std;
int main(){
	list<int> num ={1,2,3,4,5,6,7,8,9,10,11,12};
	int suma= 0;
	list<int> ::iterator flor; 
    for (flor=num.begin(); flor!=num.end(); ++flor) {
		suma += *flor;
	}
	cout<<"La suma dels valors: "<<suma <<endl;
	return 0;
}
