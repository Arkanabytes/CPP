#include <iostream>
#include <string>
using namespace std;
/* 
int main() {
    string str = "Hola mundo como estas";
    char c = 'a';
    string reemplazo = "xxx";
 
    for (int i = 0; i < (int)str.length(); ++i) {
        if(str[i]==c)
        {
            str.replace(i,1,reemplazo);
        }
    }
 
    cout << str << endl;
    return 0;
} */

int main() {
	char phrase [1000];
	cout <<"Enter a phrase: ";cin >>phrase;
	cin.getline(phrase, 1000);
    string str ="valquiria";
    char prohibited ='valquiria';
    string replace = "xxx";
 
    for (int i = 0; i < (int)str.length(); ++i) {
        if(str[i]==prohibited)
        {
            str.replace(i,10,replace);
        }
    }
    cout << str << endl;
    return 0;
}
 
