#include <iostream>
#include <locale>
#include <string.h>

using namespace std;

/**
5. Escriu una aplicaci� que rebi com a entrada una l�nia de text, que divideixi la l�nia en tokens mitjan�ant strtok 
i que mostri els tokens en ordre invers. Utilitza car�cters d'espai com a delimitadors.
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
  		// sumem el token al comen�ament del resultat, d'aquesta manera li donem la volta
		resultat = aux + " " + resultat;
  	  	// aix� fa que salti a la seg�ent paraula (el pr�xim token) de la frase
    	pch = strtok (NULL, " ,.-");
  	}
	
	cout << resultat << endl;
	
	return 0;
}
