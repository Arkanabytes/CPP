/*8. Escriu una aplicaci� que rebi com a entrada una l�nia de text i un car�cter de recerca, i
que utilitzi el m�tode find de la classe String per determinar el nombre d'ocurr�ncies
d'aquest car�cter en el text.*/
//metode find vol dir una buscar una posicio 
#include <iostream>
using namespace std;

int main (){ // INTRODUEIXO EL METODE CLASSE STRING
	string classe= "La meritxell NO ha ensenyat aquesta funcio ";
	string paraula;
	cout <<"paraula ?: ";// Deixo al usuari decidir
	int pos= classe.find("meritxell",0); // int pos troba la posicio de la paraula meritxell
	cout << pos <<endl;
	if (pos == -1){ // es un truc per que mostri no la instruccio no trobat
		cout <<"NO HA TROBAT AQUESTA POSICIO" <<endl;
   } else{
   	  cout <<"TROBADA EN LA POSICIO: " <<pos <<endl;
   }
		
}

/*int main (){ // INTRODUEIXO EL METODE CLASSE STRING
	string classe= "La meritxell NO ha ensenyat aquesta funcio ";
	char letra;
	cout <<"letra?: ";// Deixo al usuari decidir la lletra de la linea de text
	
	int pos= classe.find("letra"); // int pos troba la posicio de la lletra
	cout << pos <<endl;
	if (pos == -1){ // es un truc per que mostri no la instruccio no trobat
		cout <<"NO HA TROBAT AQUESTA POSICIO" <<endl;
   } else{
   	  cout <<"TROBADA EN LA POSICIO: " <<pos <<endl;
   }
		
} */
