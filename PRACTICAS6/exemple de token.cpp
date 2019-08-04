#include <iostream>
#include <locale>
#include <string.h>
using namespace std; 
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
}
/*
int main()
{
	setlocale(LC_ALL, "");
	resultat,string paraula= ("no es permet menjar ni beure dins del l'aula d'informatica"); // declaració i iniciació de variables
	cin >> paraula; 	// guardem el què ens han passat a l'string paraula
	resultat = paraula; 	// Igualem el resultat a la paraula 
	int mida = paraula.size();	// calculem la mida de la paraula
	// Recorrem la paraula
	for(int i=0; i<mida; i++) {
		// si la lletra en concret és una vocal (minúscula o majúscula)
		if(paraula[i]=='a' || paraula[i]=='e' {
			// canviem la lletra per una 'u'
			resultat[i] = 'p' 'o';
		} 
	}	cout << resultat << endl;
	
	return 0;
}


	if(paraula[i]=='a' || paraula[i]=='e' || paraula[i]=='i' || paraula[i]=='o' 
			|| paraula[i]=='A' || paraula[i]=='E' || paraula[i]=='I' || paraula[i]=='O') {
			// canviem la lletra per una 'u'
			resultat[i] = 'p' 'o';
		} 
	}	cout << resultat << endl;
	
	return 0;
} */
