#include <cstdlib>
#include <iostream>
#include <list>

// Ejemplo 2: metodo erase
void test03()
{
    list <string> nombres;

    nombres.push_back("Juan");
    nombres.push_back("Oscar");
    nombres.push_back("Samantha");
    nombres.push_back("Angela");
    nombres.push_back("Wilder");
    nombres.push_back("Carlos");

    list<string>::iterator it = nombres.begin();
    cout << "antes de erase" << endl;
    while( it != nombres.end() )
    {
      cout << "\t" << *it++ << endl;
    }
    cout << endl;

    list<string>::iterator ini = nombres.begin();
    list<string>::iterator fin = nombres.end();
    ini++; ini++;
    fin--; fin--;

    nombres.erase( ini, fin );
    it = nombres.begin();
    cout << "despues de erase" << endl;
    while( it != nombres.end() )
    {
      cout << "\t" << *it++ << endl;
    }
    cout << endl;
}

// Entrada del programa
int main(int argc, char *argv[])
{
    system("cls"); test01(); system("PAUSE");
    system("cls"); test02(); system("PAUSE");
    system("cls"); test03(); system("PAUSE");
    return EXIT_SUCCESS;
}
