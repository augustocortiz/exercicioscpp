/*
2. Um produtor rural produzatualmente5toneladasdegr�osporano.Elepretendeaumentarsuaprodu��oem10%aoanoat�atingir10toneladas.Fa�aumprogramaquecalculeap�squantosanoseleestar�produzindoas10toneladas.
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
		cout<<cont<<"� ano "<<x<<" toneladas"<<endl;
	}	

	cout << "\nSer� necess�rio "<<cont<<" anos, at� chegar em 10 toneladas\n";

	cout << "\nfim do programa";
}
