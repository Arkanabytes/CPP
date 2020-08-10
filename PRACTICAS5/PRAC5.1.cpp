/*1. Escriu un programa per ordenar un array numèric i un array d'strings.
Els arrays originals han de contenir:
• 8,1,4,3,9,6,2,7,5
• carrer, avinguda, rambla, passeig, carretera, passatge, plaça, ronda */
/*Arkanabytes*/

#include <iostream>
#include <locale>
#include <algorithm>

using namespace std;
int main(){
	int n[] = {8,1,4,3,0,6,2,7,5}; 
    string cadenes[] = {"carrer", "avinguda", "rambla", "passeig", "carretera", "passatge", "plaça", "ronda"};
	int midaCadenes = sizeof(cadenes)/sizeof(cadenes[0]);
	sort(n,n+ midaN);
	sort(cadenes, cadenes + midaCadenes);
    cout << "ORDRE:" << endl;
	for (int i=0; i<midaN; i++) {
        cout << n[i] << " ";	
	}
	cout << endl << "ARRAY DE CADENES ORDENADES:" << endl;
	for (int i=0; i<midaCadenes; i++) {
        cout << cadenes[i] << " ";	
	}	
	
	return 0;
}


