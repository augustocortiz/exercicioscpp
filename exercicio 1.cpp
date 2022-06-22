/*
1) Fazer um programa em C que calcule o valor da função f(x), 
para x variando de 0 a 10 (x=0,1,2,3,....10)
F(x) =2x² –3x  + 5
*/
#include<iostream>
#include<locale.h>
using namespace std;

int x;

int main(){	
	setlocale(LC_ALL,"");
	x = 1;

	cout << "f(x) = 2x²-3x+5\n";

	while ( x<=10){
		
		cout << "\nf("<<x<<") = 2("<<x<<")²-3("<<x<<")+5 = " << 2*(x*x)-(3*x)+5 << endl;
		
		x++;
	}	

	cout << "\nfim do programa";
}
