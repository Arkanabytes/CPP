#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

/** 
11. Escriu una aplicaci� que llegeixi una l�nia de text, que divideixi la l�nia en tokens 
	utilitzant car�cters d'espai com delimitadors, i que imprimeixi nom�s aquelles paraules 
	que comencin amb les lletres "ED".
**/

int main()
{
	setlocale(LC_ALL, "");
	
	char frase[512]; 
	// utilitzem un boole� per veure si hi ha alguna paraula que comenci amb la lletra b
	// donem per fet que no n'hi ha cap
	bool existeix = false;
	
	// Creem un string per guardar el resultat 
	string resultat; 

	cout << "Dis la frase" << endl;
	cin.getline(frase, 512);
	
	cout << frase << endl;
	
	// per poder utilitzar la funci� strtok necessitem treballar amb car�cters. 
	char * pch = strtok (frase," ");
	  
  	while (pch != NULL)
  	{
  		if(pch[0]=='E' && pch[1]=='D') {
  			// passem el boole� a cert, per saber que com a m�nim hi ha una paraula que comen�a amb b
  			existeix = true;
  			resultat = resultat + pch + " ";
		}
	  	// aix� fa que salti a la seg�ent paraula (el pr�xim token) de la frase
    	pch = strtok (NULL, " ,.-");
  	}
  	
  	if(!existeix)
  		cout << "No hi ha cap paraula que comenci amb ED" << endl;
	else {
		cout << "Les paraules que comencen amb ED s�n: " << endl;
		cout << resultat << endl;
	}
	
	return 0;
}
