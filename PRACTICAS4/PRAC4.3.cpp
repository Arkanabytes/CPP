/*3. Escriu una aplicació que utilitzi la generació de nombres aleatoris per crear enunciats. 
Utilitza 4 arranjaments de cadenes anomenats article, substantiu, verb i preposició. 
Crea una frase seleccionant una paraula l'atzar de cada un dels arranjaments, en el següent ordre: 
article, substantiu, verb, preposició, article i substantiu. 
A mesura que es vagi escollint cada paraula, concatena-la amb les paraules anteriors a l'enunciat. 
Les paraules s'hauran de separar mitjançant espais. 
Quan es mostri l'enunciat final haurà de començar amb una lletra majúscula i acabar amb un punt. 
L'arranjament d'articles ha de contenir: "el", "un", "algun" i "cap"; 
l'arranjament de substantius: "nen", "nena", "gos", "ciutat" i "automàtic"; 
l'arranjament de verbs:  "va conduir", "salta", "va córrer", "camina" i "omet"; 
l'arranjament de reposicions: "a", "des de", "sobre de", "sota de" i "sobre".*/
#include <iostream>
#include <stdlib.h>     
#include <ctype.h>
using namespace std; 
int main()
{
    string articles[] = {"el", "un", "algun", "cap"}; //Declaro els arrays
    string substantius[] = {"nen", "nena", "gos", "ciutat", "automàtic"}; //Declaro els arrays
    string verbs[] = {"va conduir", "salta", "va córrer", "camina", "omet"};//Declaro els arrays
    string preposicions[] = {"a", "des de", "sobre de", "sota de", "sobre"};//Declaro els arrays
    string resultat;//declaro i guardo al resultat
    int posicio0 = rand() % 4; int posicio1 = rand() % 5; 
    int posicio2 = rand() % 5; int posicio3 = rand() % 5; 
	int posicio4 = rand() % 4; int posicio5 = rand() % 5; 
    resultat.append(articles[posicio0]).append(" ").append(substantius[posicio1]).append(" "); 
	resultat = resultat + verbs[posicio2] + " " + preposicions[posicio3] + " " + articles[posicio4] + " " + substantius[posicio5];
    cout << "El resultat: " << resultat << endl;
   	resultat[0] = toupper(resultat[0]);//la primera lletra en majúscula
    resultat.append(".");	// afegim el punt final
	cout << "El frase resultant és: " << resultat << endl;
    return 0;
}
