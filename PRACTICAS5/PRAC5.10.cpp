/*10. Escriure un programa per invertir els valors d'un array.*/
/*Arkanabytes*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
		char cad[] = "PROVA";
        int len = strlen(cad);
        int i;
        for ( i=len-1; i>=0; i-- )
        printf( "%c", cad[i] );
        return 0;
}

//sizeof for a numbers
