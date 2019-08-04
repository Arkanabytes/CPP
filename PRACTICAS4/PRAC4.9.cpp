/*9. Escriu una aplicació amb base en el programa de l'exercici anterior, que rebi com a
entrada una línia de text i utilitzeu el mètode find de la classe String per determinar el
nombre total d'ocurrències de cada lletra de l'alfabet en aquest text. Les lletres
majúscules i minúscules s'han de comptar com una sola.*/
/*ALEJANDRA PINTO*/
#include <iostream>
#include <locale>
using namespace std;
int main()
{
    string paraula;   
    cout << "Disme una paraula: " << endl; //demano paraula
    getline(cin, paraula); // recuperem el que ens passen	
    int mida = paraula.size(); //paso les paraules amb minuscules
    for(int i=0; i<mida; i++) { // passem lletra a lletra a minúscules
    	paraula[i] = tolower(paraula[i]);
	}
	int index = 0; 
    int comptador = 0; 
    string copia = paraula; // creo un string i paso la paraula
    for(char lletra='a'; lletra<='z'; lletra++) {
    	index = 0; comptador = 0; 
        paraula = copia; 
	    while (index!=-1) {
	        index = paraula.find(lletra);
	        if(index!=-1)
	        	paraula = paraula.substr(index+1, paraula.length()-1);comptador++;
	    }
	    comptador--;
	    if(comptador>0)
	    	cout << "La lletras \'" << lletra << "\' surt " << comptador << " vegades." << endl; 
	} 	return 0;
}
