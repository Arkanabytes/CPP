/*Alejandra Pinto*/

#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
using namespace std;
int genero(){ //genero 4 números aleatoris entre 1-9"
int num;
num=1 + rand() % (9 +1 - 1);
return(num);
};
int main (){
int i,  vector[100], vr[100], num1, num2, num3, num4, punto, fama, answer;
srand(time(NULL));
for (i=1;i<=4;i++){
	vector[i]=genero();
	if(i>1){//si i es major que 1...
		if (i==2){
		if (vector[i]!=vector[i-1]){
			vr[i]=vector[i];
		}
		
		else
		{
		i--;
		}
		}
		if (i==3){
		if ((vector[i]!=vector[i-1]) && (vector[i]!=vector[i-2])){
			vr[i]=vector[i];
		}
		else{
		i--;
		}
		}
		if (i==4){
		if ((vector[i]!=vector[i-1]) && (vector[i]!=vector[i-2]) && (vector[i]!=vector[i-3])){
			vr[i]=vector[i];
		}
		else{
		i--;
		}
		}
}	else{
	vr[i]=vector[i];;
	}
}

//Comenzemos el Juego!!!!!!!!!!!!//

cout<<"\n                               .::PUNTO Y FAMA::.\n";

cout<<"                 \n               Vamos, adivina el numero de cuatro cifras oculto!!\n",
	
	cout<<"      ------------------------------------------------------------------";
cout<<"\n\n";
cout<<"Cuantos intentos desea hacer \npara conocer el numero oculto?: ";cin>>answer;
for(i=1;i<=answer;i++){
	  cout<<"\n---------"<<i<<" INTENTO-------\n";
      cout<<"\nPrimer Numero: ";cin>>num1;

   cout<<"\nSegundo Numero: ";cin>>num2;	
while(num2==num1) {
	cout<<"Numero Repetido, digite de nuevo: ";cin>>num2;
}
   cout<<"\nTercer Numero: ";cin>>num3;	
while ((num3==num1)|| (num3==num2)){
	cout<<"Numero Repetido, digite de nuevo: ";
	cin>>num3;
}
cout<<"\nCuarto Numero: ";cin>>num4;

while ((num4==num1)|| (num4==num2)|| (num4==num3)){
	cout<<"Numero Repetido, digite de nuevo: ";
	cin>>num4;
}

//Condicionales para saber punto y fama a continuacion//
fama=0;
punto=0;
if (vr[1]==num1){
		fama=fama+1;
	}
if (num1==vr[2] || num1==vr[3] || num1==vr[4]){
	punto=punto+1;
}
	//Para numero 2//
	
	if ((num2==vr[1])|| (num2==vr[3]) || (num2==vr[4])){
		punto=punto+1;
	}

	
	if(vr[2]==num2){
		fama=fama+1;
	} 
	//Para numero 3//
	if ((num3==vr[1])||(num3==vr[2]) ||(num3==vr[4])) {
		punto=punto+1;
	}
	
	if(vr[3]==num3){
		fama=fama+1;
	}
	//Para cuarto numero//
		if ((num4==vr[1])||(num4==vr[2])||(num4==vr[3])) {
		punto=punto+1;
	}//By. Alejandro Pabon//
//www.ALEJANDROPABON.tk//

	
	if(vr[4]==num4){
		fama=fama+1;
	}

	//Fin de condiciones//
	
cout<<"\n"<<fama<<" Fama \n";
cout<<punto<<" Punto\n";
if (fama==4){
	i=answer;
}

}
if(fama==4){
cout<<"\n                        FELICITACIONES!!!, HAS GANADO!!!!\n";
cout<<"\n                                 ";
cout<<"\n                              ";
}
else{
cout<<"\n                        HAS ALCANZADO " <<answer<<" INTENTOS MAXIMOS :(";
	cout<<"\n                             El numero era: ";
	for(i=1;i<=4;i++){
		cout<<vr[i]<<" ";
	};
	cout<<"\n";
cout<<"\n \n                         ";
cout<<"\n                            ";
}

_getch();
}
