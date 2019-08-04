#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

/**
2. Escriu una aplicaci� que utilitzi el m�tode regionMatches de la classe String per
comparar dues cadenes introdu�des per l'usuari. L'aplicaci� haur� de rebre com a entrada el
nombre de car�cters a comparar i el �ndex inicial de la comparaci�. Ha d'indicar si les cadenes
s�n iguals, ignorant si els car�cters estan en maj�scules o en min�scules.
**/

int main()
{
	setlocale(LC_ALL, "");

	// per provar el programa, �s util utilitzar paraules ja escrites, d'aquesta manera estalviem haver 
	// d'escriure-les cada vegada
	string str1 = "prova", str2 = "brovi"; 
	
	// quan el programa funcioni, descomenta aquest tros de codi, i et demanar� les paraules a comparar
	/*
	cout << "Digues la primera paraula:" << endl;
	cin >> str1;
	
	cout << "Digues la segona paraula:" << endl;
	cin >> str2;	
	*/
	
	int index1 = 0; 
	int index2 = 0;
	int mida = 0; 
	string aux1, aux2; 
	
	// demanem la mida del tros que es vol comparar
	cout << "Introdueix la mida:" << endl;
	cin >> mida;
	
	// i l'�ndex a partir del qual comparar
	cout << "Introdueix l'index':" << endl;
	cin >> index1;
	
	// amb el primer �ndex + la mida, obtenim el segon index on tallar la paraula
	// el menys 1, ve per all� de les pomes... si no el posem, ens agafar� una lletra m�s a la mida que volem
	index2 = index1 + mida -1;
	
	// utilitzem dos auxiliars per obtenir els trossos a comparar
	aux1 = str1.substr(index1, index2);
	aux2 = str2.substr(index1, index2);
	
	/*
	// �til per provar si estem tallant la paraula correctament. 
	cout<<"aux1:"<<aux1<<endl;
	cout<<"aux2:"<<aux2<<endl;
	*/

	// si els dos trossos s�n iguals, el compare ens ha de donar 0. 
	if(aux1.compare(aux2)==0) {
		cout << "Les subcadenes s�n iguals" << endl;
	} else {
		cout << "Les subcadenes no s�n iguals" << endl;
	}
	
	return 0;
}
