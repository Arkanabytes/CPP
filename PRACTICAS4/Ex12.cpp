#include <iostream>
#include <locale>

using namespace std;

/** 
12. Escriu una aplicació que rebi com a entrada un codi sencer per a un caràcter 
i que mostri el caràcter corresponent. 
Modifica aquesta aplicació de manera que generi tots els possibles codis de tres dígits en el rang de 000 a 255, 
i que intenti imprimir els caràcters corresponents.
**/

int main()
{
	setlocale(LC_ALL, "");
	
    int codi = 0; 

    cout << "Escriu un codi per veure\'n el caràcter corresponent, per exemple, la a correspon al 97: " << endl;
    cin >> codi;
    
    cout << (char)codi << endl; 

	return 0;
}
