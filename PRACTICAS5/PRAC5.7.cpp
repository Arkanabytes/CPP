/*7. Escriu un programa per copiar un array mitjançant una iteració. Utilitza l'array anterior.*/
/*ALEJANDRA PINTO*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main(){ 
int i, b[13],a[10]={1,1,2,3,5,8,13,21,55,76};
 for(i=0;i<10;i++)
    b[i]=a[i];
for(i=0;i<10;i++) 
    printf("b[%d] = %d\n",i,b[i]); 
    getch(); 
    return 0; 
} 

