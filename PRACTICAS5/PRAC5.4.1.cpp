/*4. Escriu un programa per provar si un array conté un valor específic.
L'array ha de contenir: 1789, 2035, 1899, 1456, 2013, 2016, 1458, 2458, 1254, 1472
Els valors que has de dir si té són 2016 i 2000. */

#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
	int numeros []= {1789, 2035, 1899, 1456, 2013, 2016, 1458, 2458, 1254, 1472}
	int  a=2016; int  b =2000;
	bool ex a= false;bool ex b= false;
	for (int n: numeros){
		if(a==n)
		  ex A= true;
		if(b==n)
		  ex b= true;}
	return 0;
}
