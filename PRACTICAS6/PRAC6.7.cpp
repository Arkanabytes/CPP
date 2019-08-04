/*7. Escriu un programa per copiar una llista mitjançant una iteració.*/
/*ALEJANDRA PINTO*/
#include <iostream>
#include <stdio.h>
#include <list>
using namespace std;
int main (){

  list<int> first = {1789, 2035, 1899, 1456, 2013, 2016, 1458, 2458, 1254, 1472};
  list<int> second;
  second.assign (first.begin(),first.end()); // coopia de la primera llista que li he dominat first
   list<int>::iterator it second.begin();
    cout << "llista" << endl;
    while( it != second.end() )
    {
      cout << "\t" << *it++ << endl;
    }
    cout << endl;  
  

  return 0;
}
/*
using namespace std;
int main(){ 
int i, b[13],a[10]={1,2,3,5,8,13,21,55,76};
 for(i=0;i<10;i++)
    b[i]=a[i];
  for(i=0;i<10;i++) 
    printf("b[%d] = %d\n",i,b[i]); 

    return 0; 
} */

