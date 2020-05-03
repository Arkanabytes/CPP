/*Donat un string, retorna un nou string que contingui només les lletres parells del primer*/
/*Arkanabytes*/
#include <iostream>
#include <locale>

using  namespace std;

int main() {

    string paraula;
    
    cout << "Introdueix paraula" << endl;
    cin >> paraula;
    
    int mida = paraula.length();
    
    for (int i=0; i<mida; i++){
    	cout << paraula[i] << endl;
    	i++;
	}
  
	return 0;
}
