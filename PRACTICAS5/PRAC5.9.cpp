/*9. Escriu un programa per trobar el valor màxim i mínim d'un array. Utilitza l'array de l'ex. 4. */
/*Alejandra Pinto*/
#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int A[10]={1789, 2035, 1899, 1456, 2013, 2016, 1458, 2458, 1254, 1472};// declaro els vectors	
    int major=A [0], menor= A[0];//declaro els vectors major i menor
    for (int x = 0; x <10; x++){ //mitjaçant un for 
    	if (A[x]>major) major= A [x];
    	if (A[x]<menor) menor= A [x];}
	cout <<"El numero mes gran es: "<<major <<endl;
	cout <<"El numero mes petit es: "<<menor;
	return 0;
}
