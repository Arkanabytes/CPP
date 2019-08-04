#include <iostream>
#include <locale>

using namespace std;

/** 
9. Escriu una aplicaci� amb base en el programa de l'exercici anterior, 
que rebi com a entrada una l�nia de text i utilitzeu el m�tode find 
de la classe String per determinar el nombre total d'ocurr�ncies de cada 
lletra de l'alfabet en aquest text. Les lletres maj�scules i min�scules s'han de comptar com una sola. 
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
    	// passem lletra a lletra a min�scules
    	frase[i] = tolower(frase[i]);
	}
	
    int index = 0; 
    int comptador = 0; 
    // Creem un string auxiliar i hi posem el contingut de la frase
    string copia = frase; 
    
    // fem un bucle que recorre tot l'alfabet de les llestres min�scules
    // a dins hi posem el contingut de l'exercici 8. 
    for(char lletra='a'; lletra<='z'; lletra++) {
    	
    	// al comen�ar cada for, hem d'inicialitzar l'index i el comptador
    	index = 0; comptador = 0; 
    	// li diem a la frase, que cont� el seu valor original, si no, tindrem problemes perqu� l'haurem tallat
    	// i no la revisariem tota
    	frase = copia; 

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
	    
	    // si volem que nom�s ens llisti les lletres que cont�, podem afegir el seg�ent if
	    if(comptador>0)
	    	cout << "La lletra \'" << lletra << "\' apareix " << comptador << " vegades." << endl; 
	
	} // tanquem el for
	
	return 0;
}
