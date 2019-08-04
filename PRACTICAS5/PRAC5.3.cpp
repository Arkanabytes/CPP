/*3. Escriu un programa per calcular el valor mitjà dels elements d'un array.
L'array ha de contenir els següents valors: 10, 30, 25, 45, -15, 60, -10 */



/*#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int numeros []={10, 30, 25, 45, -15, 60, -10};
	int valor= 0;
	for (int i=0;i<11;i++){
		suma += numeros [i];
	}
	cout<<"La suma dels valors: "<<suma <<endl;
	getch ();
	return 0;
} */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
 
int main(){
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
}
