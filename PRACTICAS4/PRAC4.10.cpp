/*10. Escriu una aplicació que llegeixi una línia de text, que divideixi la línia en tokens utilitzant
caràcters d'espai com delimitadors, i que imprimeixi només aquelles paraules que
comencin amb la lletra "b".*/
/*Alejandra Pinto*/
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

