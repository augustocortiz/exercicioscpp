/*
3) A série de Fibonacci é formada pela seguinte sequência: 1, 1, 2, 3, 5, 8, 13 ,21, 34, ... etc.
Escreva um programa que gere os 20 primeiros termos da série de Fibonacci (N=20).
*/
#include<iostream>
#include<locale.h>
using namespace std;

int x=1, fibo=0, a=1, b;

int main(){	
	setlocale(LC_ALL,"");

	while ( x<=20){
					
		fibo = fibo + a;
		a = b;
		b = fibo;
		
		cout<<x<<"º termo de Fibonacci = "<<fibo<<endl;
		
		x++;
	}	

	cout << "\nfim do programa";
}
