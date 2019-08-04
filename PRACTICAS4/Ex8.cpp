#include <iostream>
#include <string>
#include <locale>

using namespace std;

/** 
8. Escriu una aplicaci� que rebi com a entrada una l�nia de text i un car�cter de recerca, 
	i que utilitzi el m�tode indexOf de la classe String per determinar el nombre d'ocurr�ncies 
	d'aquest car�cter en el text.
**/

int main()
{
	setlocale(LC_ALL, "");
	
	// Declarem la frase
    string frase; 
	// i el car�cter a buscar
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
    
    // el m�tode find(lletra) ens buscar� la lletra a la frase, 
    // si no la troba retornar� null
    while (index!=-1) {
        index = frase.find(lletra);
        // despr�s de trobar la lletra el primer cop, tallem la frase a partir d'aquest index
        // per� abans hem de comprovar que l'index no �s -1
        if(index!=-1)
        	frase = frase.substr(index+1, frase.length()-1);

		// incrementem el comptador, perqu� en teoria hem trobat la lletra        
        comptador++;
    }
        
	// Donat que l'�ltima vegada que entra al while tamb� incrementar� el comptador malgrat 
    // no hagi trobat la lletra, cal restar-li un. 
    // Es podria fer de d'altres maneres... 
    comptador--;
    
    cout << "La lletra \'" << lletra << "\' apareix " << comptador << " vegades." << endl; 

	return 0;
}
