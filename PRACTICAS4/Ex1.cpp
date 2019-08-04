#include <iostream>
#include <locale>

using namespace std;

/**
1. Escriu una aplicaci� que utilitzi el m�tode compareTo de la classe String per comparar
dues cadenes introdu�des per l'usuari. Mostra si la primera cadena �s menor, igual o m�s gran que la segona.
**/ 

int main()
{
	setlocale(LC_ALL, "");
	
	string str1, str2; 
	
	cout << "Digues la primera paraula:" << endl;
	cin >> str1;
	
	cout << "Digues la segona paraula:" << endl;
	cin >> str2;	
	
	// si el resultat del m�tode compare �s menor que 0, vol dir que la primera paraula (str1)
	// �s anterior alfab�ticament que la segona.
	if(str1.compare(str2)<0) {
		cout << "La paraula " << str1 << " �s anterior a " << str2 << endl;
	} else {
		cout << "La paraula " << str2 << " �s anterior a " << str1 << endl;
	}
	
	return 0;
}
