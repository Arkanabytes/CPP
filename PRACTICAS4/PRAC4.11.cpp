/* 11.Escriu una aplicació que llegeixi una línia de text, que divideixi la línia en tokens utilitzant
caràcters d'espai com delimitadors, i que imprimeixi només aquelles paraules que
comencin amb les lletres "ED".*/
#include <iostream>
#include <locale>
#include <string.h>
using namespace std;
int main()
{
	char paraula[400]; 
	bool existeix = false;
	string resultat; 
    cout << "Disme una paraula" << endl;
	cin.getline(paraula, 400);
	cout << paraula << endl; 
	char * pch = strtok (paraula," ");
	while (pch != NULL)
  	{if(pch[0]=='E' && pch[1]=='D') {
   			existeix = true;
  			resultat = resultat + pch + " ";
		}pch = strtok (NULL, " ,.-");
  	}if(!existeix)
  		cout << "Cap paraula que comenci amb ED" << endl;else {
		cout << "Paraules ED són: " << endl;cout << resultat << endl;
	}
	return 0;
}
