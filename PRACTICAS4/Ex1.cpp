#include <iostream>
#include <locale>

using namespace std;

/**
1. Escriu una aplicació que utilitzi el mètode compareTo de la classe String per comparar
dues cadenes introduïdes per l'usuari. Mostra si la primera cadena és menor, igual o més gran que la segona.
**/ 

int main()
{
	setlocale(LC_ALL, "");
	
	string str1, str2; 
	
	cout << "Digues la primera paraula:" << endl;
	cin >> str1;
	
	cout << "Digues la segona paraula:" << endl;
	cin >> str2;	
	
	// si el resultat del mètode compare és menor que 0, vol dir que la primera paraula (str1)
	// és anterior alfabèticament que la segona.
	if(str1.compare(str2)<0) {
		cout << "La paraula " << str1 << " és anterior a " << str2 << endl;
	} else {
		cout << "La paraula " << str2 << " és anterior a " << str1 << endl;
	}
	
	return 0;
}
