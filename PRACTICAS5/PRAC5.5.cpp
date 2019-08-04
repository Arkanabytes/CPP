/*5. Escriu un programa per trobar l'índex d'un element dins l'array.
Utilitza l'array anterior i cerca l'índex de 2016.*/
//int vector []={1789, 2035, 1899, 1456, 2013, 2016, 1458, 2458, 1254, 1472};
#include <iostream>
#include <conio.h>

using namespace std;
int main (){
	int vector []={1789, 2035, 1899, 1456, 2013, 2016, 1458, 2458, 1254, 1472};
	int numeros,n;
	for (int i=0;i<n; i++){
		cout <<"Digite un numero: \n ";cin >>numeros [int];//guardo els elements del vector
	}
	//ara mostrare els elements con sus index asociats
	for (int i=0;1<n;i++){
		cout << i << numeros [i];
	}
	getch ();
	return 0;
}
/*
int A[10]={1789, 2035, 1899, 1456, 2013, 2016, 1458, 2458, 1254, 1472};// declaro els vectors	
    int major=A [0], menor= A[0];//declaro els vectors major i menor
    for (int x = 0; x <10; x++){ //mitjaçant 
    	if (A[x]>major) major= A [x];
    	if (A[x]<menor) menor= A [x];}
	cout <<"El numero mes gran es: "<<major <<endl;
	cout <<"El numero mes petit es: "<<menor;
	return 0;*/
