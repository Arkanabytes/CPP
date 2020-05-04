/*Arkanabytes*/
/*Alejandra Pinto*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int datos;
	Nodo *derecho;
	Nodo *izquierdo;
};

//prototipos,crea el arbol y lo inicio con nulo
void menu();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
Nodo *arbol = NULL;

int main(){
	menu();
	
	getch();
	return 0;
}
//funcion del menu
void menu(){
	int datos, opcion;
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Insertar un nuevo nodo "<<endl;
		cout<<"2. Salir "<<endl;
		cout<<"Opcion: "<<endl;
		cin>>opcion;
		
		switch(opcion){
			case 1: cout<<"\nDigite un numero: ";
					cin>>datos;
					insertarNodo(arbol,datos);//insertamos un nuevo nodo
					cout<<"\n";
					system("pause");
					break;		
		}
		system("cls");
	}while(opcion != 2);
}
//funciones que utilizaremos para crear un nuevo nodo
Nodo *crearNodo(int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->datos = n;
	nuevo_nodo->derecho = NULL;
	nuevo_nodo->izquierdo = NULL;
	return nuevo_nodo;
}
//funciones para insertar elementos a un arbol
void insertarNodo(Nodo *&arbol,int n){
	if (arbol == NULL){
		Nodo *nuevo_nodo = crearNodo(n);
		arbol = nuevo_nodo;
	}
	else{ //si el arbol tiene un nodo o mas necesitamos tener el arbol de la raiz
		int valorRaiz = arbol->datos;
		if(n<valorRaiz){ //si el elemento es menor a la raiz, insertamos en el lado izquierdo del arbol
			insertarNodo(arbol->izquierdo,n);
		}
		else{//si el elemento es mayor a la raiz, insertamos en lado derecho
			insertarNodo(arbol->derecho,n);	
		}
	}
	
}






