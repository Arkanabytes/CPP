/*Arkanabytes*/
/*2.-Donada una paraula i un enter n no negatiu, direm que la part davantera de la paraula
en s�n els tres primers car�cters, o la paraula sencera si aquesta t� menys de 3
car�cters. Retorna n c�pies de la part davantera de la cadena*/
/*Alejandra Pinto*/

#include <iostream>
#include <locale>

using namespace std;

int main() 
{
    string paraula = "";
    string tros = "";
    int numero = 0;

    cout<<"Digues una paraula: " <<endl;
    cin>>paraula;

    cout<<"Escriu el numero:" <<endl;
    cin >> numero;

	// si la paraula t� m�s de 3 lletres...        
    if (paraula.size()>=3){
    	// a tros hi guardo nom�s les 3 primeres
    	tros=paraula.substr(0,3);
	} else {
		// si no, agafo la paraula sencera
	   tros=paraula;
	}
    
	cout<<"resultat: " <<endl;
    for (int i=0; i<numero; i++){
     	cout<<tros;
 	}
    cout << endl;

    return 0;
}
	

