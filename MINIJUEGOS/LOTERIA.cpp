/*Escriu un programa que determini si a l'usuari (pregunta el seu nom) li toca la loteria i es fa ric.
En el moment inicial, usuari no es ric, Per tant jugara a la loteria per primer cop.
Li preguntarem si li ha tocat. En funcio de la seva resposta o be el felicitarem, o be tornara a jugar a la loteria (2a vegada) i aixi fins que li toqui.
Volem saber en quin moment li toca (quantes vegades ha jugat a la loteria).
Controla que l'usuari et respongui correctament.*/
/*ALEJANDRA PINTO*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
	int numero,dato,contador=0;
	char nombre [10],si,no;
	srand (time(NULL));//GENERO UN NOMBRE ALEATORI
	dato = 1+ rand()%(200); 
    cout <<"\tBIENVIGUTS AL JOC DE LOTERIA" <<endl;// presento el joc
    cout <<"Digam el seu nom: "; cin>> nombre ; //pregunto el nom del usuari
    cout <<"Li ha tocat la loteria algun cop si/no?: "; cin>> si; cin>> no; // pregunto si ha guanyat algun cop i ho guardo a la opcio si i la opcio no;
   
     do{//pensa
    	cout<<"Ingressa un numero: "; cin>>numero; //enseña y digita un numero i ho guardo a numero
    	if (numero>dato){
    		cout <<"\nIngressa un numero menor\n";
		}
		if(numero<dato){
			cout<<"\nIngressa un numero mayor\n";
		}
		contador++;
} while(numero != dato); //actua numero es igual a dato;
   
   cout<<"\n MOLTES FELICITATS HAS GUANYAT LA LOTERIA\n";//felicitats per a ver guanyat
   cout<<"\t ETS MOLT RIC!!" <<endl;
   cout<<"Numero de intents: "<<contador <<endl; //enseño per pantalla numero de intents i ho guardo al contador
   system ("pause");
   return 0;
		
	}
