/*Arkanabytes*/

#include <iostream>
#include <conio.h>
#include <list>
using namespace std;
int main ()
{
	llistaint1 A[10]={1789, 2035, 1899, 1456, 2013, 2016, 1458, 2458, 1254, 1472};// declaro els vectors	
    llistaint2 major=A [0], menor= A[0];//declaro els vectors major i menor
    for (int x = 0; x <10; x++){ //mitjaçant un for 
    	if (llistaint1 A[x]>major) major= llistaint1 A [x];
    	if (llistaint1 A[x]<menor) menor= llistaint1 A [x];}
	cout <<"El numero mes gran es: "<<major <<endl;
	cout <<"El numero mes petit es: "<<menor;
	return 0;
}
