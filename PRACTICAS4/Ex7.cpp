#include <iostream>
#include <locale>

using namespace std;

/**
 7. Escriu una aplicació que rebi com a entrada una línia de text i que la imprimeixi dues vegades; 
 	un cop en lletres majúscules i una altra en lletres minúscules.
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
   
    // agadem la mida, per recórrer la frase
    int mida = frase.size();
    
    for(int i=0; i<mida; i++) {
    	// passem lletra a lletra a majúscules
    	majuscules[i] = toupper(frase[i]);
		// i a minúscules    	
    	minuscules[i] = tolower(frase[i]);
	}

    cout << "La frase en majúscules és: " << majuscules << endl;
    cout << "La frase en minúscules és: " << minuscules << endl;

	return 0;
}
