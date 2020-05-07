/*Escriu un programa que donat un enter te'n retorni la seva taula de multiplicar.*/
/*Alejandra Pinto-Arkanabytes*/
#include <iostream>
#include <locale>
#include <math.h>
using namespace std;
int main(){
	int Numero1;
	
	cout<<"Introduce un numero: " <<endl;
	cin>>Numero1;   
	cout << "Resultado su tabla de multiplicar" << endl;
	for ( int i = 1 ; i <= 10 ; i++ ) 
	{
		cout << Numero1 << "*" << i << "=" << Numero1*i <<endl;	
	}  
  return 0;          
}
