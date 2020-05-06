/*Arkanabytes*/
#include  <iostream>
using namespace std;
int main(){
	int numero;
	cout <<"digite un numero: "; cin>> numero;
	
	if(numero==0){
		cout<<"El numero es cero";
	}
	
	else if(numero%2==0){
		cout <<"el numero es par";
	}
	else{
		cout <<"el numero es impar";
	}
	
	return 0;
}
