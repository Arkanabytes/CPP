/*6. Escriu un programa per eliminar un element específic d'un array.
Elimina el tercer element de l'array anterior. Explica què passa amb l'últim element.*/
#include <iostream>
using namespace std;
int main(){
	int n,pos,i;
	cout <<"Ingressi elements: ";cin >>n;
	int vector [n]; //declaro el vector
	for(i=0; i<n; i++){//fico el vector
		cout<<"Ingressi numero de la posicio: " <<i<<" del array: "; cin >> vector [i];
}   int eliminat;
    cout <<"Ingressi la posicio que vol eliminar: "; cin>> pos;
    if (pos>n){
       cout <<"POSICIO INGRESSADA ESTA FORA DEL VECTOR" <<endl;
       for (i=0;i<n;i++){//mostro el vector
       	 cout <<"El element esta en la posicio: "<<i<<" del arreglo es: " <<vector [i]<<endl;
	   }
	}else {
		eliminat=vector[pos];
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
	cout <<"EL ELEMENT ELIMINAT ES: "<<eliminat;
	}
	return 0;
}
