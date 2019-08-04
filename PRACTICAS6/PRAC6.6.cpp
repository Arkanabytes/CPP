/*6. Escriu un programa per eliminar un element específic d'una llista.
Elimina el tercer element de la llista anterior. Explica què passa amb l'últim element */
/*ALEJANDRA PINTO*/
#include <iostream>
#include <list>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
    list<int> numero ={1789, 2035, 2000, 1899, 1456, 2013, 2016, 1458, 2458, 1254, 1472};
    list<int>::iterator it = numero.begin();
    
    cout << "Abans de l`eliminació" << endl;
    while( it != numero.end() )
    {
      cout << "\t" << *it++ << endl;
    }
    cout << endl;

    numero.remove(2000);
    
    it = numero.begin();
    cout << "Despres de l`eliminacio" << endl;
    while( it != numero.end() )
    {
      cout << "\t" << *it++ << endl;
    }
    cout << endl;
    return 0;
}

/*
#include <iostream>
#include <list>
using namespace std;

// a predicate implemented as a function:
bool single_digit (const int& value) { return (value<10); }

// a predicate implemented as a class:
struct is_odd {
  bool operator() (const int& value) { return (value%2)==1; }
};

int main ()
{
  int myints[]= {15,36,7,17,20,39,4,1};
  list<int> mylist (myints,myints+8);   // 15 36 7 17 20 39 4 1

  mylist.remove_if (single_digit);           // 15 36 17 20 39

  mylist.remove_if (is_odd());               // 36 20

  cout << "mylist contains:";
  for (list<int>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
  cout << ' ' << *it;
  cout << '\n';

  return 0;
} */
