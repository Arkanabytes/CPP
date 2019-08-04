/* 12. Escribe una aplicación que reciba como entrada un código entero para un carácter y que
muestre el carácter correspondiente. Modifica esta aplicación de forma que genere todos
los posibles códigos de tres dígitos en el rango de 000 a 255, y que intente imprimir
caracteres correspondientes. */
/*ALEJANDRA PINTO*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
int codi=0;
    cout<<"Introdueix un codic desde 000 fins a 255: ";cin >>codi;
    cout << (char)codi << endl; 
	return 0;
}
