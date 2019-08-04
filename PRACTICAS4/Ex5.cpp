#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

/**
5. Escriu una aplicació que rebi com a entrada una línia de text, que divideixi la línia en tokens mitjançant strtok 
i que mostri els tokens en ordre invers. Utilitza caràcters d'espai com a delimitadors.
**/ 

int main()
{
	setlocale(LC_ALL, "");
	
    // Declarem la variable per guardar la frase.
    char frase[512];
    // Declarem un array d'Strings per guardar el resultat.
    string resultat, aux;

	cout << "Escriu la frase: " << endl;
	cin.getline (frase, 512);
	
	char * pch = strtok (frase," ,.-");

  	while (pch != NULL)
  	{
  		aux = pch;
  		// sumem el token al començament del resultat, d'aquesta manera li donem la volta
		resultat = aux + " " + resultat;
  	  	// això fa que salti a la següent paraula (el pròxim token) de la frase
    	pch = strtok (NULL, " ,.-");
  	}
	
	cout << resultat << endl;
	
	return 0;
}
