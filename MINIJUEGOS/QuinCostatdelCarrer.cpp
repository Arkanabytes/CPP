/*Quin costat del carrer Tasca*/
/*Alejandra Pinto*/

#include <iostream>
using namespace std;
bool exercici();

int main()
{
	int num = 0; 
	cin >> num;
	
	// mentre el numero que ens passin sigui diferent de 0... ja que 0 marca el final de les proves.
	while(num!=0) {

		// si el numero es parell, esta a la dreta
		if(num%2==0) {
			cout << "DERECHA" << endl;
		} else { // si ?s imparell, est? a l'esquerra
			cout << "IZQUIERDA" << endl;
		}
		cin >> num; 
	}
			
	return 0;
}
