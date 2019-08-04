#include <iostream>
#include <string>
#include <locale>

using namespace std;

/**
6. Utilitza els mètodes de comparació de cadenes per escriure una aplicació que 
ordeni alfabèticament una llista de cadenes. 
Permet a l'usuari introduir 4 cadenes. 
**/

int main()
{
	setlocale(LC_ALL, "");
	
    // Declarem els string per les 4 cadenes, i un que ens servirà als for com auxiliar
    string s1, s2, s3, s4, aux;
    
    cout << "Digues una paraula:" << endl;
    getline(cin, s1); 
	
	cout << "Una altra:" << endl;
    getline(cin, s2); 
    
	cout << "Una altra:" << endl;
    getline(cin, s3); 
    
	cout << "La última:" << endl;
    getline(cin, s4); 
 
    // Declarem un array de Strings per guardar les cadenes
	string list[] = {s1, s2, s3, s4};	    
        
    // declarem una variable mida, d'aquesta manera podem reutilizar el programa
    int mida = sizeof(list)/sizeof(string);
    cout << "mida:" << mida << endl;

    for(int i=0; i<mida; i++) {
        for(int j=i+1; j<mida; j++) {
            if(list[i].compare(list[j])>0){
                // això vol dir que la paraula de la j, va abans que la que hi ha a la i
                // Per tant s'han d'intercanviar
                aux = list[j];
                list[j] = list[i];
                list[i] = aux; 
            }
        } // fi for j
    } // fi for i

    cout << "Paraules ordenades: " << endl;
	cout << list[0] << endl;
	cout << list[1] << endl;
	cout << list[2] << endl;
	cout << list[3] << endl;	
	
	return 0;
}
