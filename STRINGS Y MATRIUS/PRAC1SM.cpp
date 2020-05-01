/*Arkanabytes*/
/*1.Comptador de lletres.
Escriure un programa que llegeixi una frase i a continuació visualitzi cada paraula 
de la frase una sota l’altra, seguida cada paraula del número de lletres que la componen.*/

#include <iostream>
#include <string.h>
using namespace std;
  int main(){
  char sentence[100]; //declaro les variables
  int longi; 
      cout<<"Type the Phrase: "; cin>>sentence; // declaro per a que la frase es pugui insertar i guardar en la frase
      longi=strlen(sentence); // ja previament declarada el llarg mitjaçant un stringleng que conte les paraules i es guarde a frase
    cout<<"The phrase contains: "<<longi<<endl; // mitjaçant un cout i guardo la variable llarg per a que em digui les paraules que conté
	return 0;
}
