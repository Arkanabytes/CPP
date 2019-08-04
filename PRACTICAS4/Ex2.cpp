#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

/**
2. Escriu una aplicació que utilitzi el mètode regionMatches de la classe String per
comparar dues cadenes introduïdes per l'usuari. L'aplicació haurà de rebre com a entrada el
nombre de caràcters a comparar i el índex inicial de la comparació. Ha d'indicar si les cadenes
són iguals, ignorant si els caràcters estan en majúscules o en minúscules.
**/

int main()
{
	setlocale(LC_ALL, "");

	// per provar el programa, és util utilitzar paraules ja escrites, d'aquesta manera estalviem haver 
	// d'escriure-les cada vegada
	string str1 = "prova", str2 = "brovi"; 
	
	// quan el programa funcioni, descomenta aquest tros de codi, i et demanarà les paraules a comparar
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
	
	// i l'índex a partir del qual comparar
	cout << "Introdueix l'index':" << endl;
	cin >> index1;
	
	// amb el primer índex + la mida, obtenim el segon index on tallar la paraula
	// el menys 1, ve per allò de les pomes... si no el posem, ens agafarà una lletra més a la mida que volem
	index2 = index1 + mida -1;
	
	// utilitzem dos auxiliars per obtenir els trossos a comparar
	aux1 = str1.substr(index1, index2);
	aux2 = str2.substr(index1, index2);
	
	/*
	// útil per provar si estem tallant la paraula correctament. 
	cout<<"aux1:"<<aux1<<endl;
	cout<<"aux2:"<<aux2<<endl;
	*/

	// si els dos trossos són iguals, el compare ens ha de donar 0. 
	if(aux1.compare(aux2)==0) {
		cout << "Les subcadenes són iguals" << endl;
	} else {
		cout << "Les subcadenes no són iguals" << endl;
	}
	
	return 0;
}
