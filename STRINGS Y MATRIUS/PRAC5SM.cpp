/*5.Paraula prohibida.
Realitzar un programa que busqui totes les aparicions d�una paraula prohibida. 
L�usuari entrar� una frase, la llegirem i caldr� substituir cada aparici� de la paraula 
prohibida per �XXX� (on el n�mero de �X� que cont� la cadena haur� de ser igual al n�mero 
de car�cters que t� la paraula prohibida.*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
	char paraula[1000]; 	// L�usuari entrar� una frase, 
	cout << "Introdueix una frase" << endl; 
	cin.getline(paraula, 1000);	// la llegirem  
	string prohibida = "valquiria";  // Suposem que la paraula prohibida ja la tenim
	string X=paraula;
	string XXX=prohibida;
	// aquest string l'has de construir amb la mida de la paraula prohibida

	// Tallem la frase, amb els espais, les ",", els "." i els "-"
	char * apuntador = strtok (frase," ,.-");
  	string aux; // que ser� cada paraula de la frase
  	
  	while (apuntador != NULL)
  	{
  		aux = apuntador;
  		// aqu� aux �s la paraula a la que estic
  		
  		// si aux = prohibida
  		// que t'ho canvii per XXXX (e
    	
		apuntador = strtok (NULL, " ,.-");
  	}	
	
	// i caldr� substituir cada aparici� de la paraula 

	return 0; 	
}







