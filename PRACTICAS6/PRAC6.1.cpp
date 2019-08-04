/*1.Escriu un programa per ordenar una llista de números i una de paraules.
Les llistes originals han de contenir:
• 8,1,4,3,9,6,2,7,5
• carrer, avinguda, rambla, passeig, carretera, passatge, plaça, ronda*/
/*ALEJANDRA PINTO*/
#include <iostream>
#include <list>
#include <iterator>

using namespace std;
// funci? per mostrar els elements d'una llista
void pepito(list<int> l)
{
    list<int> :: iterator it; 
    for (it=l.begin(); it!=l.end(); ++it)
        cout << " " << *it;
    // el \t ens far? una tabulaci? a la sortida est?ndard
    // *it ens mostrar? l'element corresponent a la posici? on es troba l'iterador
    cout << "\n";
}
 
// funci? per mostrar els elements d'una llista
void showsList(list<string> l)
{
    list<string> :: iterator it;
    for (it=l.begin(); it!=l.end(); ++it)
        cout << "\t " << *it;
    // el \t ens far? una tabulaci? a la sortida est?ndard
    // *it ens mostrar? l'element corresponent a la posici? on es troba l'iterador
    cout << "\n";
} 
 
int main()
{
	setlocale(LC_ALL, "");
    list<int> ilist= {8,1,4,3,9,6,2,7,5}; 	// Declarem una llista d'enters
    list<string> slist = {"carrer","avinguda","rambla","passeig","carretera","passatge","plaza","ronda"}; // I la llista de paraules
    cout << "Llistes desordenades:" << endl;	// Cridem a la funci? per mostrar la llista:
 	pepito(ilist);
 	showsList(slist);
 	
 	// Ordenem les llistes: 
 	ilist.sort();
 	slist.sort();
 	
 	// i les tornem a mostrar:
 	cout << "Llistes ordenades:" << endl;
  	pepito(ilist);	
  	showsList(slist);	
    return 0;
}

