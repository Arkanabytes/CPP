/*Arkanabytes*/
#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
	int datos;
	Nodo *next;
};

//Prototipo
void agregaPila(Nodo *&, int);

int main(){
	Nodo *pila= NULL;
	int n1, n2;
	cout<<"\t\tPilas-Arkana\n\n";
	cout<<"Digite un numero: ";cin>>n1;
	agregaPila(pila,n1);
	
	cout<<"Digite un numero: ";cin>>n2;
	agregaPila(pila,n2);
	
	getch();
	return 0;
}

void agregaPila(Nodo *&pila, int n){

	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->datos = n;
	nuevo_nodo->next = pila;
	pila =nuevo_nodo;
	cout<<"\nElemento"<<n<<" agregado a Pila correctamente"<<endl;
}
