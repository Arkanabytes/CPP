/**1. (Llat� porc) Escriu una aplicaci� que codifiqui frases en catal� a frases en llat� porc. 
El llat� porc �s una forma de llenguatge codificat.
Hi ha moltes variacions en els m�todes utilitzats per formar frases en llat� porc. Per q�estions de
simplicitat, utilitzeu el seg�ent algoritme:
Per formar una frase en llat� porc a partir d'una frase en catal�, divideix la frase en paraules amb
un objecte de la classe StringTokenizer. Per traduir cada paraula en catal� a una paraula en llat�
porc, poseu la primera lletra de la paraula en catal� al final de la paraula, i afegiu les lletres "ae".
D'aquesta manera, la paraula "salta" es converteix "Altasae", la paraula "el" es converteix en
"leae" i la paraula "ordinador" es converteix en "rdinadoroae".
Els espais en blanc entre les paraules romanen com espais en blanc. Suposeu que la frase en
catal� consisteix en paraules separades per espais en blanc, que no hi ha signes de puntuaci� i
que totes les paraules tenen dos o m�s lletres.**/

#include <iostream>
#include <locale>
#include <stdio.h>
#include <string.h>

using namespace std;
int main()
{
setlocale(LC_ALL, "");
char frase[256] = "Hola bon dia"; 
string aux, resultat;
int mida = 0; 
/*
cout << "Dis la frase" << endl;
cin.getline (frase,256);
*/
cout << frase << endl;
char * pch = strtok (frase," ,.-");
  
  while (pch != NULL)
  {
  aux = pch;
  mida = aux.size();
 	resultat = resultat + aux.substr(1, mida-1) + pch[0] + "ae ";
    //cout << mida << endl;
    //cout << aux.substr(1,mida-1) << endl;
    pch = strtok (NULL, " ,.-");
  }
 
  cout << resultat << endl;

return 0;
}

