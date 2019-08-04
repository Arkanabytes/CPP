#include <iostream>
// Necessitem aquesta llibreria per utilitzar el random
#include <stdlib.h>     
// Aqu� es troben les funcions toupper i tolower
#include <ctype.h> 


using namespace std;

/**
3. Escriu una aplicaci� que utilitzi la generaci� de nombres aleatoris per crear enunciats. 
Utilitza 4 arranjaments de cadenes anomenats article, substantiu, verb i preposici�. 
Crea una frase seleccionant una paraula l'atzar de cada un dels arranjaments, en el seg�ent ordre: 
article, substantiu, verb, preposici�, article i substantiu. 
A mesura que es vagi escollint cada paraula, concatena-la amb les paraules anteriors a l'enunciat. 
Les paraules s'hauran de separar mitjan�ant espais. 
Quan es mostri l'enunciat final haur� de comen�ar amb una lletra maj�scula i acabar amb un punt. 
L'arranjament d'articles ha de contenir: "el", "un", "algun" i "cap"; 
l'arranjament de substantius: "nen", "nena", "gos", "ciutat" i "autom�tic"; 
l'arranjament de verbs:  "va conduir", "salta", "va c�rrer", "camina" i "omet"; 
l'arranjament de reposicions: "a", "des de", "sobre de", "sota de" i "sobre".
**/

int main()
{
	setlocale(LC_ALL, "");
	
    // Declarem els arrays de les paraules
    string articles[] = {"el", "un", "algun", "cap"};
    string substantius[] = {"nen", "nena", "gos", "ciutat", "autom�tic"};
    string verbs[] = {"va conduir", "salta", "va c�rrer", "camina", "omet"};
    string preposicions[] = {"a", "des de", "sobre de", "sota de", "sobre"};
        
    // Declarem l'String que utilitzarem per guardar el resultat
    string resultat;
	
    // hi ha 4 articles
    int posicio0 = rand() % 4; 
    // 5 substantius, verbs i preposicions
    int posicio1 = rand() % 5; 
    int posicio2 = rand() % 5; 
    int posicio3 = rand() % 5; 
    // altra vegada 4 articles
    int posicio4 = rand() % 4; 
    // i 5 substantius
    int posicio5 = rand() % 5; 
    
	// per concatenar dos strings, podem utilitzar el m�tode append
    resultat.append(articles[posicio0]).append(" ").append(substantius[posicio1]).append(" "); 
    // o b� la funci� +, les dos coses fan el mateix efecte. 
	resultat = resultat + verbs[posicio2] + " " + preposicions[posicio3] + " " + articles[posicio4] + " " + substantius[posicio5];

    cout << "El resultat parcial �s: " << resultat << endl;
    
    // Ara hem de posar la primera lletra en maj�scula
   	resultat[0] = toupper(resultat[0]);
	// afegim el punt final
	resultat.append(".");
	  
	cout << "El frase resultant �s: " << resultat << endl;

	return 0;
}

