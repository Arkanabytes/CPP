/*2. Escriu un programa per sumar els valors d'un array.
L'array a sumar ha de contenir: 1,2,3,4,5,6,7,8,9,10,11,12.*/ 
/*alejaandra Pinto*/
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int num[]={1,2,3,4,5,6,7,8,9,10,11,12};
	int suma= 0;
	for (int i=0;i<11;i++){
		suma += num[i];}
	cout<<"La suma dels valors: "<<suma <<endl;
	getch ();
	return 0;
}



