/*2. Escriu una aplicaci� per comparar dues cadenes introdu�des per l'usuari. L'aplicaci�
haur� de rebre com a entrada el nombre de car�cters a comparar i el �ndex inicial de la
comparaci�. Ha d'indicar si les cadenes s�n iguals, ignorant si els car�cters estan en
maj�scules o en min�scules. Pots fer-ho, tamb�, amb el m�tode compare i el substring.*/
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
