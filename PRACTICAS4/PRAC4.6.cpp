/*6. Utilitza els mètodes de comparació de cadenes per escriure una aplicació que ordeni
alfabèticament una llista de cadenes. Permet a l'usuari introduir 4 cadenes.*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main(){ //declaro les cuatro cadenas i demano per pantalla digitar un caracter i despres ho guardo la seva funcio cadena 1 i aixi sucesivament...
	char cadena1[]=" ";
	cout <<"Ingressi un caracter: ";cin >> cadena1;
	char cadena2[]=" ";
	cout <<"Ingressi un altre caracter: ";cin >> cadena2;
	char cadena3[]=" ";
	cout <<"Ingressi un altre caracter: ";cin >> cadena3;
	char cadena4[]=" ";
	cout <<"Ingressi un altre caracter: ";cin >> cadena4;
	if (strcmp (cadena1,cadena2)!=0){ //utilitzo la funcion string compare per comparacio de les cuatro caden
	    cout <<"ORDENADAS ALFABETICAMENT";}
	getch ();
	return 0;
}
