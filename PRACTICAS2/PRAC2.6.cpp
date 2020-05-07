/*Donat un string, retorna'n una versió sense cap vocal, a no ser que aquestes es trobin
en un dels extrems del string. Per exemple, hola ? hla, avui ? avi, mollerussa ? mllrss*/
/*Alejandra Pinto - Arkanabytes*/
#include <iostream>
#include <locale>
using namespace std;
int main (){
	
	string paraula;
	cout <<"Introdueix paraula";
	cin>> paraula;
	int mida = paraula.length();
	
    char ch; 
	
    for (int i=0; i<=mida; i++){
    	ch = paraula[i];
	    if(ch!='a' && ch!='e'&& ch!='i' && ch!='o'&& ch!='u') {
	    	cout << ch;
	    }    
    }
    return 0;
}

