#include <iostream>
#include <locale>

using namespace std;

/** 
Modifica aquesta aplicaci� de manera que generi tots els possibles codis de tres d�gits en el rang de 000 a 255, 
i que intenti imprimir els car�cters corresponents.
**/

int main()
{
	setlocale(LC_ALL, "");
	
    for(int i=0; i<255; i++) {
    	cout << (char)i << endl; 
    }

	return 0;
}
