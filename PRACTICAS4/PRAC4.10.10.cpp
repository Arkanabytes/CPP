/*10. Escriu una aplicació que llegeixi una línia de text, que divideixi la línia en tokens utilitzant 
caràcters d'espai com delimitadors, i que imprimeixi només aquelles paraules que comencin amb la lletra "b".*/
/*ALEJANDRA PINTO*/
#include <iostream>
#include <locale>
#include <string.h>
using namespace std;
int main()
{
	char frase[400]; 
	bool exis= false;
	string resultat; 
    cout << "Disme la frase" << endl;
	cin.getline(frase, 400);
	cout << frase << endl;
	char * pch = strtok (frase," ");
	while (pch != NULL)
  	{
  		if(pch[0]=='b') {
  			exis = true;
  			resultat = resultat + pch + " ";
		}  	pch = strtok (NULL, " ,.-");
  	}
  	    if(!exis)
  		cout << "Cap paraula comença amb b" << endl;
	else {
		cout << "Paraules començades amb b: " << endl;
		cout << resultat << endl;
	}
	return 0;
}
