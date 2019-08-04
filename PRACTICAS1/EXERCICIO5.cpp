/*Realice un programa que lea de la entrada estandar las siguientes datos de
una persona:
   Edad:dato de tipo entero
   Sexo:dato de tipo caracter
   Altura en metros: dato de tipo real;
   
   Tras leer los datos, el programa debre mostrarlos en la salida estandar*/
   
   #include<iostream>
   using namespace std;
   int main (){
   	  
     int edad;
     char sexo[10];
     float altura;
     
     cout<<"Ingresa tu edad: ";cin>>edad;
     cout<<"Tu sexo? ";cin>>sexo;
     cout<<"Tu altura: ";cin>>altura;
     cout<<"\nLos datos ingresados son: ";cin>>edad >>sexo>>altura;
   	return 0;
   }
