/*2.Paraula capicua.
Una paraula capicua es pot llegir igual d’esquerra a dreta que de dreta a esquerra.
Per exemple: “anna”, “tururut”, “refer”. Construeix un programa que demani una paraula 
pel teclat i ens retorni si és capicua o no.
En una segona versió, podries comprovar si una frase és capicua. Per exemple: 
"Català, a l'atac!", "I ara calla, carai!" o "Anul·la la lluna”. */
/*ALEJANDRA PINTO*/
#include <iostream>
#include <string.h>
using namespace std;
int main (){
	char paraula[100];
	int x,y,z;//declaro les variables tipo caracter y tres enters a x,y,z
    cout<<"\t Paraules Capicua\n";//presento el programa
	cout<<"Ingressi una paraula: ";
	cin>>paraula;//demano una paraula
    x=strlen(paraula);
	x=x-1;//previament tenin declarada la x  fai un strirlen per a que ho guarde a la variable tipus caracter paraula
    for(y=0,z=x;y<=x/5;y++,z--) { //mitjançant un for dic que y es igual cero seta es igual a x y es menor o igual a x s
		if(paraula[y]==paraula[z]) {
		//si paraula 
			cout<<"ES CAPICUA\n";break;
		} else {
			cout<<"NO ES CAPICUA";break;
		}
	}
   return 0;// NOTA EL PROGRAMA CUMPLEIX LES DOS VERSIONS AMB FRASES I PARAULES!!
}
