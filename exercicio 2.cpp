/*
2. Um produtor rural produz atualmente 5 toneladas de grãos por ano.
Ele pretende aumentar sua produção em 10% ao ano até atingir 10 toneladas.
Faça um programa que calcule após quantos anos ele estará produzindo as 10toneladas.
*/
#include<iostream>
#include<locale.h>
using namespace std;

float x;
int cont;

int main(){	
	setlocale(LC_ALL,"");
	x = 5;
	cont = 0;

	while ( x<10){

		x = x + (x*0.1);		
		cont ++;
		cout<<cont<<"º ano "<<x<<" toneladas"<<endl;
	}	

	cout << "\nSerá necessário "<<cont<<" anos, até chegar em 10 toneladas\n";

	cout << "\nfim do programa";
}
