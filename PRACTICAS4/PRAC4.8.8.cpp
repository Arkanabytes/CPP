/*8. Escriu una aplicació que rebi com a entrada una línia de text i un caràcter de recerca, i
que utilitzi el mètode find de la classe String per determinar el nombre d'ocurrències
d'aquest caràcter en el text.*/
//metode find vol dir una buscar una posicio 
/*Alejandra Pinto*/
#include <iostream>
using namespace std;

int main (){ // INTRODUEIXO EL METODE CLASSE STRING
	string paraula= "La meritxell NO ha ensenyat aquesta funcio ";
	char letra;
	cout <<"letra?: "; cin>> letra; // Deixo al usuari decidir la lletra de la linea de text
	
	int pos=paraula.find(letra); // int pos troba la posicio de la lletra
	if (pos == -1){ // es un truc per que mostri no la instruccio no trobada
		cout <<"NO HA TROBAT AQUESTA POSICIO" <<endl;
   } else{
   	  cout <<"TROBADA EN LA POSICIO: " <<pos <<endl;// mostra la posicio
   }
		
}
