/*5. Escriu una aplicaci� que rebi com a entrada una l�nia de text, que divideixi la l�nia en
tokens mitjan�ant strtok i que mostri els tokens en ordre invers. Utilitza car�cters d'espai
com a delimitadors.*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
    char paraula[]=" "; //declaro la variable tipus caracter amb un char de nom paraula,
	cout<<"Introdueix la paraula: "; cin>> paraula; //demano que el usuari introduexi qualsevol paraula per a que utilitzi la funcio strrev i evidement ho guardo a paraula
	strrev (paraula); //declaro la funcio 
	cout<< paraula <<endl; //que mostri per pantalla la feina que ha fet strrev ja previament almacetnada a la variable paraula
    getch(); // al ejectar el programa tanqui la sesio quant jo li dic.
	return 0;
}


