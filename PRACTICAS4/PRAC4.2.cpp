/*2. Escriu una aplicació per comparar dues cadenes introduïdes per l'usuari. L'aplicació
haurà de rebre com a entrada el nombre de caràcters a comparar i el índex inicial de la
comparació. Ha d'indicar si les cadenes són iguals, ignorant si els caràcters estan en
majúscules o en minúscules. Pots fer-ho, també, amb el mètode compare i el substring.*/
/*ALEJANDRA PINTO*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main(){
	char cad1[]=""; cout <<"Introdueix una paraula: "; cin >> cad1;
	char cad2[]=""; cout <<"Introdueix una paraula: "; cin >> cad2;
	    
		if (strcmp(cad1,cad2) == 0){
		cout<<"Aquestes cadenes son iguals"<<endl;
	}
    	if (strcmp(cad1,cad2)!= 0){
		cout<<"Aquestes cadenes son diferents"<<endl;
	}
	return 0;
}
