/*3.Quadre 3x3.
Un quadre 3x3 és una matriu 3x3 formada per números de l’1 al 9. Exemple:
Exemple de quadre màgic 3x3
Crea un programa que permeti introduir un quadre per teclat . 
El programa haurà de comprovar que el números introduïts són correctes, és a dir,
 que es troben entre l’1 i el 9. I mostra'l adequadament. */
/*ALEJANDRA PINT0*/
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int matriu[3][3] ={{8,3,4},{1,5,9},{6,7,2}};// inserto la matriu amb la numeracio donada
        cout<<"La matriu es:  \n";//mitjançant un cout 
        for(int f=0;f<3;f++){//mitjaçant un for inserto una variable f
          for(int c=0;c<3;c++){//mitjançant un for inserto una una varible c
            cout<<" "<<matriu[f][c];//em dona donara la matriu i  me tornara adreçats les files i columnes
             }cout<<"\n";
 }
 getch();
 return 0;
}
	
