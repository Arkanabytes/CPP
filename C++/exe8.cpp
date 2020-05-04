#include <iostream>
using namespace std;
int main(){
	float a,b,c,d,e,f,resultado=0;
	cout <<"Digite numero a: ";cin>>a;
	cout <<"Digite numero b: ";cin>>b;
	cout <<"Digite numero c: ";cin>>c;
	cout <<"Digite numero d: ";cin>>d;
	cout <<"Digite numero e: ";cin>>e;
	cout <<"Digite numero f: ";cin>>f;
	
	resultado =(a+(b/c))/(d+(e/f));
	cout <<"Resultado es: " <<resultado <<endl;
	return 0;
}
