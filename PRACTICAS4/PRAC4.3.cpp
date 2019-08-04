/*3. Escriu una aplicaci� que utilitzi la generaci� de nombres aleatoris per crear enunciats. 
Utilitza 4 arranjaments de cadenes anomenats article, substantiu, verb i preposici�. 
Crea una frase seleccionant una paraula l'atzar de cada un dels arranjaments, en el seg�ent ordre: 
article, substantiu, verb, preposici�, article i substantiu. 
A mesura que es vagi escollint cada paraula, concatena-la amb les paraules anteriors a l'enunciat. 
Les paraules s'hauran de separar mitjan�ant espais. 
Quan es mostri l'enunciat final haur� de comen�ar amb una lletra maj�scula i acabar amb un punt. 
L'arranjament d'articles ha de contenir: "el", "un", "algun" i "cap"; 
l'arranjament de substantius: "nen", "nena", "gos", "ciutat" i "autom�tic"; 
l'arranjament de verbs:  "va conduir", "salta", "va c�rrer", "camina" i "omet"; 
l'arranjament de reposicions: "a", "des de", "sobre de", "sota de" i "sobre".*/
#include <iostream>
#include <stdlib.h>     
#include <ctype.h>
using namespace std; 
int main()
{
    string articles[] = {"el", "un", "algun", "cap"}; //Declaro els arrays
    string substantius[] = {"nen", "nena", "gos", "ciutat", "autom�tic"}; //Declaro els arrays
    string verbs[] = {"va conduir", "salta", "va c�rrer", "camina", "omet"};//Declaro els arrays
    string preposicions[] = {"a", "des de", "sobre de", "sota de", "sobre"};//Declaro els arrays
    string resultat;//declaro i guardo al resultat
    int posicio0 = rand() % 4; int posicio1 = rand() % 5; 
    int posicio2 = rand() % 5; int posicio3 = rand() % 5; 
	int posicio4 = rand() % 4; int posicio5 = rand() % 5; 
    resultat.append(articles[posicio0]).append(" ").append(substantius[posicio1]).append(" "); 
	resultat = resultat + verbs[posicio2] + " " + preposicions[posicio3] + " " + articles[posicio4] + " " + substantius[posicio5];
    cout << "El resultat: " << resultat << endl;
   	resultat[0] = toupper(resultat[0]);//la primera lletra en maj�scula
    resultat.append(".");	// afegim el punt final
	cout << "El frase resultant �s: " << resultat << endl;
    return 0;
}
