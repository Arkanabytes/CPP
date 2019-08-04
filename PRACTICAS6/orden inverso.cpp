#include <cstdlib>
#include <iostream>
#include <list>
 
using namespace std;

int test()
{
  list<char> v;

  for (int x = 'A'; x <= 'Z'; x++) v.push_back(x);
  cout << endl;

  cout << "orden original" << endl;
  // creamos un iterator normal
  list<char>::iterator i = v.begin();
  while(i != v.end() )
  {
    cout << *i++ << " ";
  }
  cout << endl;

  cout << "orden inverso" << endl;
  // creamos un iterator reverso
  list<char>::reverse_iterator ri = v.rbegin();
  while(ri != v.rend() )
  {
    cout << *ri++ << " ";
  }
  cout << endl;
  return 0;
}


int main(int argc, char *argv[])
{
  test();
  system("PAUSE");
  return EXIT_SUCCESS;
}
