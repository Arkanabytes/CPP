/*Arkanabytes*/
#include <iostream>
using namespace std;
int main(){
	int edad;
	cout<<"Digite un su edad 18-25: ";cin>> edad;
	//
	if ((edad>=18)&& (edad<=25)){
		cout <<"Su edad esta en el rango de [18-25]";
	}
	else {
		cout<<"su edad no esta en el rango";
	}
	return 0;
}
