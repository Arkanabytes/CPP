#include <cstdlib>
#include <iostream>
#include <list>

using namespace std;

// Ejemplo: metodo remove
void test01()
{
    list <string> nombres;

    nombres.push_back("Juan");
    nombres.push_back("Oscar");
    nombres.push_back("Samantha");
    nombres.push_back("Angela");
    nombres.push_back("Wilder");
    nombres.push_back("Carlos");
    nombres.push_back("Oscar");

    list<string>::iterator it = nombres.begin();
    cout << "antes de remove" << endl;
    while( it != nombres.end() )
    {
      cout << "\t" << *it++ << endl;
    }
    cout << endl;

    nombres.remove("Oscar");
    it = nombres.begin();
    cout << "despues de remove" << endl;
    while( it != nombres.end() )
    {
      cout << "\t" << *it++ << endl;
    }
    cout << endl;
}

