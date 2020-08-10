#include <cstdlib>
#include <iostream>
#include <vector>
 
using namespace std;
 
int main(int argc, char *argv[])
{
    vector<char> v;
 
    for (int x = 'A'; x <= 'Z'; x++)
        v.push_back(x);
 
    // obtenemos un iterator del tipo char
    vector<char>::iterator it;
    // lectura y despliegue de datos
    cout << "\ndesplegando datos" << endl;
    for( it = v.begin(); it != v.end(); it++ )
        cout << *it << endl;
 
    system("PAUSE");
    return EXIT_SUCCESS;
}
