/*5.Paraula prohibida.
Realitzar un programa que busqui totes les aparicions d’una paraula prohibida. 
L’usuari entrarà una frase, la llegirem i caldrà substituir cada aparició de la paraula 
prohibida per ‘XXX’ (on el número de ‘X’ que conté la cadena haurà de ser igual al número 
de caràcters que té la paraula prohibida.*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
	char paraula[1000]; 	// L’usuari entrarà una frase, 
	cout << "Introdueix una frase" << endl; 
	cin.getline(paraula, 1000);	// la llegirem  
	string prohibida = "valquiria";  // Suposem que la paraula prohibida ja la tenim
	string X=paraula;
	string XXX=prohibida;
	// aquest string l'has de construir amb la mida de la paraula prohibida

	// Tallem la frase, amb els espais, les ",", els "." i els "-"
	char * apuntador = strtok (frase," ,.-");
  	string aux; // que serà cada paraula de la frase
  	
  	while (apuntador != NULL)
  	{
  		aux = apuntador;
  		// aquí aux és la paraula a la que estic
  		
  		// si aux = prohibida
  		// que t'ho canvii per XXXX (e
    	
		apuntador = strtok (NULL, " ,.-");
  	}	
	
	// i caldrà substituir cada aparició de la paraula 

	return 0; 	
}







