/*8. Escriu un programa per inserir un element (posició específica) en un array.
L'array conté els valors: 12, 22, 32, 52, 62, 72, 82, 92
Afegeix el número 42 a la posició 3 */
#include <iostream>
using namespace std;
int main(){
	int vector[]={12, 22, 32, 52, 62, 72, 82, 92};
	int n,pos,i;
	cout <<"Ingressi elements: ";cin >>n;
	for(i=0; i<n; i++){//fico el vector
		cout<<"Ingressi numero de la posicio: " <<i<<" del array: "; cin >> vector [i];
}   int afegir;
    cout <<"Ingressi la posicio que vol afegir: "; cin>> pos;
    if (pos>n){
       cout <<"POSICIO INGRESSADA ESTA DINS DEL VECTOR" <<endl;
       for (i=0;i<n;i++){//mostro el vector
       	 cout <<"El element esta en la posicio: "<<i<<" del arreglo es: " <<vector [i]<<endl;
	   }
	}else {
		eliminat = vector[pos];
		for(i=0; i<n; i++){
		    if (i==pos){
		    	while (i<n){
		    		vector [i]=vector [i+1];
		    		i++;
				}break;
			}
	}
	n=n-1; //redueixo les cantitats de numbres dels vectors
	for(i=0;i<n;i++){
	cout<<"Ingressi numero de la posicio: " <<i<<" del array: "; cin >> vector [i];
	}	
	cout<<endl;
	cout <<"EL ELEMENT AFEGIT ES: "<<afegir;
	}
	return 0;
}


 
