#include <iostream>
#include <locale>

using namespace std;

/** 
12. Escriu una aplicaci� que rebi com a entrada un codi sencer per a un car�cter 
i que mostri el car�cter corresponent. 
Modifica aquesta aplicaci� de manera que generi tots els possibles codis de tres d�gits en el rang de 000 a 255, 
i que intenti imprimir els car�cters corresponents.
**/

int main()
{
	setlocale(LC_ALL, "");
	
    int codi = 0; 

    cout << "Escriu un codi per veure\'n el car�cter corresponent, per exemple, la a correspon al 97: " << endl;
    cin >> codi;
    
    cout << (char)codi << endl; 

	return 0;
}
