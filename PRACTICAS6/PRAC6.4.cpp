/*4. Escriu un programa per provar si una llista cont� un valor espec�fic.
La llista ha de contenir: 1789, 2035, 1899, 1456, 2013, 2016, 1458, 2458, 1254, 1472
Els valors que has de dir si t� s�n 2016 i 2000 */
/*ALEJANDRA PINTO*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main ()
{
	int vector []={1789, 2035, 1899, 1456, 2013, 2016, 1458, 2458, 1254, 1472};
    int major=0;
    int menor=0;
    for (int i=0; i<10; i++){
    	if (vector [i]> major){
    		major= vector [i];
		}
		if (vector [i]< menor){
			menor=vector [i];
		}
	}
	cout <<"El numero mes gran: "<<major ;
	cout <<"El numero mes petit: "<< menor;
	return 0;
}
