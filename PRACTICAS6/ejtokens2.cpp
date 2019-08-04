//ejemplos de tokenizer
#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main()
{
  	char frase[]="No es permet ni beure dins de l'aula d'informatica";
  
    string resultat, aux; //declaro un strings i guardo el resultat
	// cin.getline (paraula,200);

	char * pch = strtok (frase," ,.-"); //  la declaracio point character
    while (pch != NULL)
  	{
  		aux = pch;
  		
  		// Quan trobi una vocal, que sumi "p" i la mateixa vocal... 
  		
  		for(int i=0; i<aux.size(); i++) {
  			// declarem mitjançan a un 
  			
		  
		}
  		
  		if (i<p,p++){
  			i=p;
		  
  		 else{
  		 	i=-p;
		   } 
		
		resultat = aux + " " + resultat;// sumo el token al començament del resultat
    	
		pch = strtok (NULL, " ,.-"); 
  	}
	cout << resultat << endl;
	return 0;
}
  
  /*
  cout << "FRASE ORIGINAL "<<frase << endl;
  ptr = strtok(frase," ");//argumentos: frase, caracter delimitador
  while(ptr != NULL)
    {
      cout << ptr << endl;
      ptr = strtok(NULL, " ");
    }
  cout << "LA FRASE DE DESPRES " << frase << endl;
  return 0;
}

{
    char paraula[200]= "no es permet ni beure dins de l'aula d' informatica" <<endl;// declaro amb un char paraula
    string resultat, aux; //declaro un strings i guardo el resultat
	cin.getline (paraula,200);
	char * pch = strtok (paraula," ,.-");
    while (pch != NULL)
  	{
  	aux = pch;
		resultat = aux + " " + resultat;// sumo el token al començament del resultat
    	pch = strtok (NULL, " ,.-"); 
  	}
	cout << resultat << endl;
	return 0;
} */
