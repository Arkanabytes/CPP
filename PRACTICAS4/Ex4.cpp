#include <iostream>
#include <locale>
#include <stdio.h>
#include <string.h>

using namespace std;

/**
1. (Llatí porc) Escriu una aplicació que codifiqui frases en català a frases en llatí porc. 
El llatí porc és una forma de llenguatge codificat.
Hi ha moltes variacions en els mètodes utilitzats per formar frases en llatí porc. Per qüestions de
simplicitat, utilitzeu el següent algoritme:
Per formar una frase en llatí porc a partir d'una frase en català, divideix la frase en paraules amb
un objecte de la classe StringTokenizer. Per traduir cada paraula en català a una paraula en llatí
porc, poseu la primera lletra de la paraula en català al final de la paraula, i afegiu les lletres "ae".
D'aquesta manera, la paraula "salta" es converteix "Altasae", la paraula "el" es converteix en
"leae" i la paraula "ordinador" es converteix en "rdinadoroae".
Els espais en blanc entre les paraules romanen com espais en blanc. Suposeu que la frase en
català consisteix en paraules separades per espais en blanc, que no hi ha signes de puntuació i
que totes les paraules tenen dos o més lletres.
**/

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
	
	// per poder utilitzar la funció strtok necessitem treballar amb caràcters. 
	char * pch = strtok (frase," ,.-");
	  
  	while (pch != NULL)
  	{
  		aux = pch;
  		mida = aux.size();
  		// la paraula resultant, serà la suma de treure la primera lletra, sumar-la al final, més ae i un espai en blanc
  		// si volem treure tot el resultat en un frase, hem de posar el resultat + davant, d'aquesta manera, a cada bucle
  		// i afegeix el resultat dels anteriors. 
 		resultat = resultat + aux.substr(1, mida-1) + pch[0] + "ae ";
  	  	//cout << mida << endl;
  	  	//cout << aux.substr(1,mida-1) << endl;
  	  	// això fa que salti a la següent paraula (el pròxim token) de la frase
    	pch = strtok (NULL, " ,.-");
  	}
  	
  	cout << resultat << endl;

	return 0;
}

