/*5. Escriu una aplicaci� que rebi com a entrada una l�nia de text, que divideixi la l�nia en tokens mitjan�ant strtok 
i que mostri els tokens en ordre invers. Utilitza car�cters d'espai com a delimitadors.*/
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
		resultat = aux + " " + resultat;// sumo el token al comen�ament del resultat
    	pch = strtok (NULL, " ,.-"); 
  	}
	cout << resultat << endl;
	return 0;
}
