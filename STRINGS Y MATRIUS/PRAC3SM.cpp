/*3.Quadre 3x3.
Un quadre 3x3 �s una matriu 3x3 formada per n�meros de l�1 al 9. Exemple:
Exemple de quadre m�gic 3x3
Crea un programa que permeti introduir un quadre per teclat . 
El programa haur� de comprovar que el n�meros introdu�ts s�n correctes, �s a dir,
 que es troben entre l�1 i el 9. I mostra'l adequadament. */
/*ALEJANDRA PINT0*/
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int matriu[3][3] ={{8,3,4},{1,5,9},{6,7,2}};// inserto la matriu amb la numeracio donada
        cout<<"La matriu es:  \n";//mitjan�ant un cout 
        for(int f=0;f<3;f++){//mitja�ant un for inserto una variable f
          for(int c=0;c<3;c++){//mitjan�ant un for inserto una una varible c
            cout<<" "<<matriu[f][c];//em dona donara la matriu i  me tornara adre�ats les files i columnes
             }cout<<"\n";
 }
 getch();
 return 0;
}
	
