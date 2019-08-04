#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

/** 
10. Escriu una aplicació que llegeixi una línia de text, que divideixi la línia en tokens utilitzant 
caràcters d'espai com delimitadors, i que imprimeixi només aquelles paraules que comencin amb la lletra "b".
**/

int main()
{
	setlocale(LC_ALL, "");
	
	char frase[512]; 
	// utilitzem un booleà per veure si hi ha alguna paraula que comenci amb la lletra b
	// donem per fet que no n'hi ha cap
	bool existeix = false;
	
	// Creem un string per guardar el resultat 
	string resultat; 

	cout << "Dis la frase" << endl;
	cin.getline(frase, 512);
	
	cout << frase << endl;
	
	// per poder utilitzar la funció strtok necessitem treballar amb caràcters. 
	char * pch = strtok (frase," ");
	  
  	while (pch != NULL)
  	{
  		if(pch[0]=='b') {
  			// passem el booleà a cert, per saber que com a mínim hi ha una paraula que comença amb b
  			existeix = true;
  			resultat = resultat + pch + " ";
		}
	  	// això fa que salti a la següent paraula (el pròxim token) de la frase
    	pch = strtok (NULL, " ,.-");
  	}
  	
  	if(!existeix)
  		cout << "No hi ha cap paraula que comenci amb la lletra b" << endl;
	else {
		cout << "Les paraules que comencen amb la lletra b són: " << endl;
		cout << resultat << endl;
	}
	
	return 0;
}
