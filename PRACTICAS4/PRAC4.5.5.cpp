/*5. Escriu una aplicació que rebi com a entrada una línia de text, que divideixi la línia en tokens mitjançant strtok 
i que mostri els tokens en ordre invers. Utilitza caràcters d'espai com a delimitadors.*/
#include <iostream>
#include <locale>
#include <string.h>
using namespace std;
int main()
{
    char paraula[512];// declaro amb un char paraula
    string resultat, aux; //declaro un strings i guardo el resultat
    cout << "Escriu la paraula: "<< endl;
	cin.getline (frase, 512);
	char * pch = strtok (frase," ,.-");
    while (pch != NULL)
  	{
  	aux = pch;
		resultat = aux + " " + resultat;// sumo el token al començament del resultat
    	pch = strtok (NULL, " ,.-"); 
  	}
	cout << resultat << endl;
	return 0;
}
