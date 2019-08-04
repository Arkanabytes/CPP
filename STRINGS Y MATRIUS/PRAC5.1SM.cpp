/*5.Paraula prohibida.
Realitzar un programa que busqui totes les aparicions d’una paraula prohibida. 
L’usuari entrarà una frase, la llegirem i caldrà substituir cada aparició de la paraula 
prohibida per ‘XXX’ (on el número de ‘X’ que conté la cadena haurà de ser igual al número 
de caràcters que té la paraula prohibida.*/
/*Alejandra Pinto*/
#include <iostream>
#include <string.h>
using namespace std;
int main() {
	char paraula[1000]; 	// L’usuari entrarà una frase, 
	cout << "Introdueix una frase" << endl;// li demano al usuari que ingressi una paraula
	cin.getline(paraula, 1000);// li dic que recuperi la mida de la paraula
    string str  ="valquiria";// fico com paraula prohibda valquiria
    char c = 'valquiria';
    string replace = "xxx";// li dic que per mig d'un string fique amb xxx
    for (int i = 0; i < (int)str.length(); ++i) {
        if(str[i]==c)
        {
            str.replace(i,10,replace);
        }
    }
    cout << str << endl;
    return 0;
}
