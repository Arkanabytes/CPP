/* 11.Escriu una aplicaci� que llegeixi una l�nia de text, que divideixi la l�nia en tokens utilitzant
car�cters d'espai com delimitadors, i que imprimeixi nom�s aquelles paraules que
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
		cout << "Paraules ED s�n: " << endl;cout << resultat << endl;
	}
	return 0;
}
