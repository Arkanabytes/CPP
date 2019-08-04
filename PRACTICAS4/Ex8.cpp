#include <iostream>
#include <string>
#include <locale>

using namespace std;

/** 
8. Escriu una aplicació que rebi com a entrada una línia de text i un caràcter de recerca, 
	i que utilitzi el mètode indexOf de la classe String per determinar el nombre d'ocurrències 
	d'aquest caràcter en el text.
**/

int main()
{
	setlocale(LC_ALL, "");
	
	// Declarem la frase
    string frase; 
	// i el caràcter a buscar
	char lletra; 

	// Demanem la frase    
    cout << "Digues una frase: " << endl;
    // recuperem el que ens passen per consola
    getline(cin, frase);	

	// Demanem la lletra    
    cout << "Digues la lletra que vols buscar: " << endl;
    // recuperem el que ens passen per consola
    cin >> lletra; 

    int index = 0; 
    int comptador = 0; 
    
    // el mètode find(lletra) ens buscarà la lletra a la frase, 
    // si no la troba retornarà null
    while (index!=-1) {
        index = frase.find(lletra);
        // després de trobar la lletra el primer cop, tallem la frase a partir d'aquest index
        // però abans hem de comprovar que l'index no és -1
        if(index!=-1)
        	frase = frase.substr(index+1, frase.length()-1);

		// incrementem el comptador, perquè en teoria hem trobat la lletra        
        comptador++;
    }
        
	// Donat que l'última vegada que entra al while també incrementarà el comptador malgrat 
    // no hagi trobat la lletra, cal restar-li un. 
    // Es podria fer de d'altres maneres... 
    comptador--;
    
    cout << "La lletra \'" << lletra << "\' apareix " << comptador << " vegades." << endl; 

	return 0;
}
