#include <iostream>
#include <locale>

using namespace std;

/**
 7. Escriu una aplicaci� que rebi com a entrada una l�nia de text i que la imprimeixi dues vegades; 
 	un cop en lletres maj�scules i una altra en lletres min�scules.
**/ 

int main()
{
	setlocale(LC_ALL, "");
	
	// Declarem la frase, i els strings pels resultats
    string frase = "UNA frase QUALSEVOL per provar";
	string majuscules, minuscules;

/*
	// Demanem la frase    
    cout << "Digues una frase: " << endl;
    // recuperem el que ens passen per consola
    getline(cin, frase);
*/
   
   	// D'aquesta manera inicialitzem les variables a la mateixa mida que la frase
   	majuscules = frase; 
   	minuscules = frase;
   
    // agadem la mida, per rec�rrer la frase
    int mida = frase.size();
    
    for(int i=0; i<mida; i++) {
    	// passem lletra a lletra a maj�scules
    	majuscules[i] = toupper(frase[i]);
		// i a min�scules    	
    	minuscules[i] = tolower(frase[i]);
	}

    cout << "La frase en maj�scules �s: " << majuscules << endl;
    cout << "La frase en min�scules �s: " << minuscules << endl;

	return 0;
}
