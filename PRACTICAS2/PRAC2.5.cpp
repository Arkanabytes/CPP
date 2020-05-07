/*Donat un string com «Java», retorna un string com «JJaJavJava». Per exemple, del
string «Classe», hauria de retornar «CClClaClasClassClasse».*/
/*ALEJANDRA PINTO*/
/*Arkanabytes*/
#include <iostream>
#include <locale>
using namespace std;

int main (){
	string paraula;
	cout << "introdueix paraula";cin >> paraula;

	// Trosseja la paraula a lletres
	paraula = "JJaJavJava";
	int mida = paraula.length();
	for (int i=0; i<=mida; i++){
    	cout << paraula [i] << endl;
    	i++;
    	for (int i=0; i<mida; i++){
    	cout << paraula[i] << endl;
    	i++;
    		for(int i=0; i<=mida; i++){
		cout << paraula.substr(0,i) << endl;
	}
	return 0;
}
