/*3. Donat un string i un caràcter, retorna el nombre de vegades que apareix el caràcter al
string. */
/*Arkanabytes */
/* Exemple: 
	Si la paraula que et donen és dimecres, i vols comptar les "e". 
	Recorres la paraula. 
	un for que va des de la lletra 0 a la lletra paraula.size()-1
	lletraAux = paraula[i]; // serà un char
	si la lletraAux és igual a la lletra que busques... 
		que sumi 1 a un comptador
*/

#include <iostream>
#include <locale>

using namespace std;

int main()
{
	string paraula = "";
	char lletra;
	char aux;	
	int comptador = 0; 

	cout <<"Demani paraula: " <<endl;
	cin >> paraula;
	cout <<"Demani paraula: " <<endl;
	cin >> lletra;
	
	int mida = paraula.size();
  
	// Recorres la paraula. 
	// un for que va des de la lletra 0 a la lletra paraula.size()-1	
  	for (int i=0; i<mida; i++){
		// lletraAux = paraula[i]; // serà un char  		
		aux = paraula[i]; // serà un char  		
		// si la lletraAux és igual a la lletra que busques... 	
		if(aux==lletra) {
			// que sumi 1 a un comptador			
			comptador++;
		}
   
	}
     cout << "Resultat: " << comptador <<endl;
	return 0;}
