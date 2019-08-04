//ejemplos de tokenizer
#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main()
{
  char frase[]="No es permet ni beure dins de l'aula d'informatica";
  char *ptr;
  cout << "FRASE ORIGINAL " << frase << endl;
  ptr = strtok(frase," ");//argumentos: frase, caracter delimitador
  while(ptr != NULL)
    {
      cout << ptr << endl;
      ptr = strtok(NULL, " ");
    }
  cout << "LA FRASE DE DESPRES " << frase << endl;
  return 0;
}
