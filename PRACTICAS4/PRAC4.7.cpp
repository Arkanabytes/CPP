/*7. Escriu una aplicaci� que rebi com a entrada una l�nia de text i que la imprimeixi dues
vegades; un cop en lletres maj�scules i una altra en lletres min�scules.*/
/*ALEJANDRA PINTO */
#include <iostream>
#include <conio.h>
#include <string.h>

//funcio strupr= pasa una palabra en majuscules
//funcio strlwr= pasa una pablabra a minuscules

using namespace std;
int main (){
	char text [] = " "; cout<<"Ingressi paraula: "; cin >> text;
	strupr (text);//paso la paraula a majuscules amb la funcio strup ()
	cout <<text<<endl;
	strlwr (text); //paso la paraula a minuscules amb la funcio strlwr
	cout <<text<<endl;
	getch ();
	return 0;
}

