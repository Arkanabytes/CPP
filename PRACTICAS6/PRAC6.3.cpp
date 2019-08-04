/*3. Escriu un programa per calcular el valor mitjà dels elements d'una llista.
La llista ha de contenir els següents valors: 10, 30, 25, 45, -15, 60, -10*/
/*ALEJANDRA PINTO*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <list>
using namespace std;
int main(){
 	list <int> num = {10,30,25,45,-15,60,-10};
    int suma;
	list<int> ::iterator num; 
    for (m=num.begin(); m!=num.end(); ++m) {
		suma += num;
	}
	cout<<"La suma dels valors: "<<suma <<endl;
	return 0;
}
 	/*
	      int num[]={10, 30, 25, 45, -15, 60, -10};
          int i;
        
          int n;
          int suma = 0;
          double mitjana = 0.0;
 
           nf ("¿Cuantos numeros vas a sumar? ",n);
          scanf ("%d", &n);
             for(i=1; i<=n; i++){
             scanf("%d\n", &num);
             suma = suma + num;
           }
          mitjana = suma / (double)n;
          printf("La media es %lf\n", mitjana
		  
		  ); 

        return 0;
}*/
