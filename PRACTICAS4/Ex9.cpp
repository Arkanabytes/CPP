#include <iostream>
#include <locale>

using namespace std;

/** 
9. Escriu una aplicació amb base en el programa de l'exercici anterior, 
que rebi com a entrada una línia de text i utilitzeu el mètode find 
de la classe String per determinar el nombre total d'ocurrències de cada 
lletra de l'alfabet en aquest text. Les lletres majúscules i minúscules s'han de comptar com una sola. 
**/

int main()
{
	setlocale(LC_ALL, "");
	
	// Declarem la frase
    string frase; 

	// Demanem la frase    
    cout << "Digues una frase: " << endl;
    // recuperem el que ens passen per consola
    getline(cin, frase);	

// Primer passarem la frase a minuscules
    int mida = frase.size();
    for(int i=0; i<mida; i++) {
    	// passem lletra a lletra a minúscules
    	frase[i] = tolower(frase[i]);
	}
	
    int index = 0; 
    int comptador = 0; 
    // Creem un string auxiliar i hi posem el contingut de la frase
    string copia = frase; 
    
    // fem un bucle que recorre tot l'alfabet de les llestres minúscules
    // a dins hi posem el contingut de l'exercici 8. 
    for(char lletra='a'; lletra<='z'; lletra++) {
    	
    	// al començar cada for, hem d'inicialitzar l'index i el comptador
    	index = 0; comptador = 0; 
    	// li diem a la frase, que conté el seu valor original, si no, tindrem problemes perquè l'haurem tallat
    	// i no la revisariem tota
    	frase = copia; 

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
	    
	    // si volem que només ens llisti les lletres que conté, podem afegir el següent if
	    if(comptador>0)
	    	cout << "La lletra \'" << lletra << "\' apareix " << comptador << " vegades." << endl; 
	
	} // tanquem el for
	
	return 0;
}
