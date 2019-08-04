#include <iostream>
#include <locale>

using namespace std;

/** 
Modifica aquesta aplicació de manera que generi tots els possibles codis de tres dígits en el rang de 000 a 255, 
i que intenti imprimir els caràcters corresponents.
**/

int main()
{
	setlocale(LC_ALL, "");
	
    for(int i=0; i<255; i++) {
    	cout << (char)i << endl; 
    }

	return 0;
}
