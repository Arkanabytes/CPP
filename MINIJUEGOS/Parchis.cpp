/*Hatejandra*/
#include<time.h>
#include<stdlib.h>
#include <conio.h>
#include <iostream>
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

		else{
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
