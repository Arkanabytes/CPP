/* 12. Escribe una aplicaci�n que reciba como entrada un c�digo entero para un car�cter y que
muestre el car�cter correspondiente. Modifica esta aplicaci�n de forma que genere todos
los posibles c�digos de tres d�gitos en el rango de 000 a 255, y que intente imprimir
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
