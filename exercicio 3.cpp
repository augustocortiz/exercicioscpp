/*
3)As�riedeFibonacci�formadapelaseguinteseq��ncia:1,1,2,3,5,8,13,21,34,...etc.Escrevaumprogramaquegereos20primeirostermosdas�riedeFibonacci(N=20).
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
		
		cout<<x<<"� termo de Fibonacci = "<<fibo<<endl;
		
		x++;
	}	

	cout << "\nfim do programa";
}
