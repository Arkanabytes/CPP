/*1. Escriu una aplicació que utilitzi el mètode compare de la classe String per comparar
dues cadenes introduïdes per l'usuari. Mostra si la primera cadena és menor, igual o
més gran que la segona.*/

#include <iostream>
#include <locale>
using namespace std;
int main()
{
	string cad1, cad2; //declaro les dos cadenes 
	cout << "Ingressi la primera paraula:" << endl;cin >> cad1;
	cout << "Ingressi la segona paraula:" << endl;cin >> cad2;	
	if(cad1.compare(cad2)<0) {//comparacio de les dos cadenes
		cout << "La paraula " << cad1 << " és anterior a " << cad2 << endl;
	} else {
		cout << "La paraula " << cad2 << " és anterior a " << cad1 << endl;
	}
	
	return 0;
}

