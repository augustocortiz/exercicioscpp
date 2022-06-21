/*
2. Um produtor rural produzatualmente5toneladasdegrãosporano.Elepretendeaumentarsuaproduçãoem10%aoanoatéatingir10toneladas.Façaumprogramaquecalculeapósquantosanoseleestaráproduzindoas10toneladas.
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
