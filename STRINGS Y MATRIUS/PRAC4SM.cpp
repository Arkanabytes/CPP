/*4.Eliminació d’espais en blanc.
Escriure un programa que llegeixi una frase i substitueixi totes les seqüències de dos o més 
espais en blanc per un únic espai. Cal visualitzar la frase ‘néta’ d’espais en blanc sobrants.*/
/*ALEJANDRA PINTO*/
#include <iostream>
using namespace std;
int main(){
   char paraula[]={"Prova d'eliminacio d'espais en blanc"};
    cin.getline(paraula,100);//mitjaçant un getline agafo la paraula per a que em recupera la linea sencera 
    for(int  i = 0; paraula[i] != 0;++i)//amb un for declaro un  mitjançant un int a cero i que em guarde la paraula a la variable declarada amb la mateixa in
        if(paraula[i] != 32)//amb un si paraula ho guardo a paraula i previament declarada amb un for 
            cout<<paraula[i];// fai un  cout i ho guardo a la variable paraula 
    cin.get();
    getch();
    return 0;
}


//notes for me!!
 //getline recover the comlete liine
 //strinleng returnss the measure of the word
 //sizeof does the same function as getline take the measure of the word
 
