/*La maledicció de la loteria Tasca*/
/*Alejandra Pinto*/
#include <iostream>

using namespace std;

void exercici();

int main()
{
	int casos = 0; 
	cin >> casos; 
	
	for (int i=0; i<casos; i++) 
		exercici();

	return 0;
	
}

void exercici(){
	
	// p, d, s y m con la cantidad de dinero del premio, y el l?mite por d?a, semana y mes.	
	
	int premi, ldia, lsetmana, lmes;
	// resultats
	int mes=0, setmana=0, dia=0;
			
	cin >> premi;
	cin >> ldia;
	cin >> lsetmana;
	cin >> lmes;		
	
	/*
	cout << premi << endl;
	cout << ldia << endl;
	cout << lsetmana << endl;
	cout << lmes << endl;	
	*/

	// Comencem comprovant el mes, si el premi ?s m?s gran que el limit mensual
	// dividim el premi pel l?mit mensual i tindrem quants mesos necessitem
	// el que ens sobri (d'aqu? el m?dul) ho utilitzarem per veure quantes setmanes i dies necessitem
	if(premi>=lmes) {
		mes = premi/lmes;
		premi = premi%lmes;
	}
	
	// aquesta comparaci? la utilizem perqu? tregui el resultat tal i com es demana, ?s a dir, 
	// abans marca 7 dies que una setmana, o 4 setmanes a 1 mes
	if(premi==0 && lsetmana*4>=lmes && mes>0){
		mes--;
		setmana = lmes/lsetmana;
		premi = lmes%lsetmana;
	}
	
	// amb el que ens ha sobrat, mirem quantes setmanes necessitem. 
	if(premi>=lsetmana) {
		// utilitzem += per tal de sumar el resultat al que ens ha quedat al if anterior
		setmana += premi/lsetmana;
		premi = premi%lsetmana;
	}		
	
	// el mateix que amb la setmana i el mes
	if(premi==0 && ldia*7>=lsetmana && setmana>0){
		setmana--;
		dia = lsetmana/ldia;
	}
	
	// amb el que ens sobra, comprovem els dies
	if(premi>=ldia) {
		dia = premi/ldia;
		premi = premi%ldia;
	} 

	// si una vegada hem tret tot el que pod?em segons els l?mits, ens sobra algo, 
	// necessitarem un altre dia per treure-ho. Es sobreenten que el que ens queda ?s inferior al l?mit dia
	if(premi>0) {
		dia++;
	}
	
	// Finalment imprimim els resultats
	cout << mes << " " << setmana << " " << dia << endl;

	// Pots provar de treure els dos ifs 'estranys', veur?s que el resultat ?s correcte, per? no el que ens demana.
}
