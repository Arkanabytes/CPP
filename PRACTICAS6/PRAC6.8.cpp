
/*8. Escriu un programa per inserir un element (posició específica) en una llista.
La llista conté els valors: 12, 22, 32, 52, 62, 72, 82, 92
Afegeix el número 42 a la posició 3*/
/*ALEJANDRA PINTO*/
#include <cstdlib>
#include <iostream>
#include <list>
using namespace std;
void insertar()
{
    list<int> num ={12,22,32,52,62,72,82,92};
    list<int>::iterator it = num.begin();   // Se obtiene un iterador al inicio de la lista  
    while (*it !=52 && it != num.end() ) it++;  // Buscamos el elemento "num"
    num.insert(it, 1, 42);  // Insertamos un elemento 42 en la posición indicada
                           // por el iterador it.
    it = num.begin();
    while( it != num.end() )
    {
      	cout << *it++ << endl;
    }
}
 int main(int argc,char*argv[])
{
    insertar();
    return 0;
}

/*
    list <string> num;
	num.push_back("12", "22", "32","52", "62", "72", "82", "92");
   // Se obtiene un iterador al inicio de la lista  
   list<string>::iterator it = num.begin();

    // Buscamos el elemento "Pedro"
    while (*it != "3" && it != num.end() ) it++;

    // Insertamos un elemento "42" en la posición indicada
    // por el iterador it.
    num.insert(it, 1, "42");

    it = num.begin();
    while( it != num.end() )
    {
      cout << *it++ << endl;
    }
} 
 
int main(int argc, char *argv[])
{
    insertar();
    system("PAUSE");
    return EXIT_SUCCESS;
} */
		
	/*
	int vector[]={12, 22, 32, 52, 62, 72, 82, 92};int n,pos,i;
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
} */



