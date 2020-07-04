/*Arkanabytes*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int datos;
	Nodo *derecho;
	Nodo *izquierdo;
	Nodo *padre;
};

//prototipos,crea el arbol y lo inicio con nulo
void menu();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);
bool mostrarArbol(Nodo *,int);
void busqueda(Nodo *,int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *,int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *,Nodo *);
void destruirNodo(Nodo *);

Nodo *arbol = NULL;

int main(){
	menu();
	
	getch();
	return 0;
}
//funcion del menu
void menu(){
	int datos, opcion,contador=0;
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Insertar un nuevo nodo "<<endl;
		cout<<"2. Mostrar el arbol completo "<<endl;
		cout<<"3. Buscar el elemento en el arbol completo "<<endl;
		cout<<"4. Recorrer el arbol en preOrden "<<endl;
		cout<<"5. Recorrer el arbol en InOrden "<<endl;
		cout<<"6. Salir "<<endl;
		cout<<"Opcion: "<<endl;
		cin>>opcion;
		
		switch(opcion){
			case 1: cout<<"\nDigite un numero: ";
					cin>>datos;
					insertarNodo(arbol,datos);//insertamos un nuevo nodo
					cout<<"\n";
					system("pause");
					break;			
			case 2:	cout<<"\nMostrando el arbol completo: \n\n";
					mostrarArbol(arbol,contador);
					cout<<"\n";
					system("pause");
					break;
			case 3: cout<<"\nDigite el elemento a buscar: \n\n";
					cin>>datos;
					if(busqueda(arbol,datos) == true){
						cout<<"\nElemento "<<datos<<"a sido encontrado en el arbol ";
					}
					else{
						cout<<"\nElemento no encontrado\n";
					}
					cout<<"\n";
					system("pause");
					break;
			case 4:cout<<"\nRecorrido en PreOrden: ";
					preOrden(arbol);
					cout<<"\n\n";
					system("pause");
			case 5:cout<<"\nRecorrido en InOrden: ";
					inOrden(arbol);
					cout<<"\n\n";
					system("pause");
					break;
			case 6:cout<<"\nRecorrido en PostOrden: ";
					postOrden(arbol);
					cout<<"\n\n";
					system("pause");
					break;
			case 7:cout<<"\nDigite el numero a eliminar: ";
					cin>>datos;
		}
		system("cls");
	}while(opcion != 8);
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

//funcion para mostrar el arbol completo
void mostrarArbol(Nodo *arbol, int contador){
	if(arbol==NULL){
		return;
	}
	else{
		mostrarArbol(arbol->derecho,contador+1);
		for(int i=0;i<contador;i++){
			cout<<" ";
		}
		cout<<arbol->datos<<endl;
		mostrarArbol(arbol->izquierdo,contador+1);
	}
}

//funcion para buscar un elemento en el arbol
bool busqueda(Nodo *, int n){
	if(arbol== NULL){
		return false;
	}
	else if(arbol->datos==n){
		return true;
	}
	else if(n<arbol->datos){
		return busqueda(arbol->izquierdo,n);
	}
	else{
		return busqueda(arbol->derecho,n);
	}
}

//funcion para recorrido en profundidad -preOrden
void preOrden(Nodo *arbol){
	if(arbol==NULL){
		return;
	}
	else{
		cout<<arbol->datos<<" - ";
		preOrden(arbol->izquierdo);
		preOrden(arbol->derecho);	
	}
}

//funcion para recorrido en profundidad en InOrden
void inOrden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}
	else{
		inOrden(arbol->izquierdo);
		cout<<arbol->datos<<" - ";
		inOrden(arbol->derecho);
	}

}

//Eliminar un nodo del arbol
void eliminar(Nodo *arbol, int n){
	if(arbol == NULL){ //Si el arbol esta vacio
	return; //no haces nada
	}
	else if(n< arbol->datos){ //si el valor esta vacio
		eliminar(arbol->izquierdo,n){ //busca por la izquierda
	}
	else if(n> arbol->datos){
		eliminar(arbol->derecho,n);
	}
	else{ //Si ya encontraste el valor
		eliminarNodo(arbol);			
		}
	}
}

//funcion para determinarel nodo mas izquierdo posible
Nodo *minimo(Nodo *arbol){
	if(arbol == NULL){
		return NULL;
	}
	if(arbol->izquierdo){
		return minimo(arbol->izquierdo);
	}
	else{
		return arbol;
	}
}

//funcion para reemplazar dos nodos
void reemplazar(Nodo *arbol,Nodo *nuevoNodo){
	if(arbol->padre){
		//arbol padre hay que asignarle un nuevo hijo
		if(arbol->datos= arbol->padre->datos){
			arbol->padre->derecho = nuevoNodo;
		}
	}
	if(nuevoNodo){
		//procedemos a asignarle su nuevo padre
		nuevoNodo->padre = arbol->padre;
	}
}
//funcion para destruir un nodo
void destruirNodo(Nodo *nodo){
	nodo->derecho = NULL;
	nodo->izquierdo = NULL;
	
	delete nodo;
}
//funcion para eliminar el nodo encontrado
void eliminarNodo(Nodo *nodoEliminar){
	if(nodoEliminar->derecho&&nodoEliminar->derecho){
		Nodo *menor = minimo(nodoEliminar->derecho);
		nodoEliminar->datos = menor->derecho;
		eliminarNodo(menor);
	}
	else if(nodoEliminar->izquierdo){
		reemplazar(nodoEliminar,nodoEliminar->izquierdo);
		destruirNodo(nodoEliminar);
		//procedemos a asignarle su nuevo padre
	}
	else if(nodoEliminar->derecho){
		reemplazar(nodoEliminar,nodoEliminar->derecho);
		destruirNodo(nodoEliminar);
	}
}
