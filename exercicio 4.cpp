/*
4)Em uma eleição existem quatro candidatos. Osvotos são informados
por código. Os dados utilizados para a escrutinagem obedecem à seguinte codificação:

•1, 2, 3, 4 = vot opara os respectivos candidatos;
•5 = voto nulo;
•6=voto em branco.

Elabore um algoritmo que calcule e escreva:

•O total de votos para cada candidato;
•O total de votos nulos e seu percentual sobre o total;
•O total de votos em branco e seu percentual sobre o total;
•Determine qual candidato teve maior votação e foi eleito(excetobrancosenulos).
Obs:Para encerrar a votação deve-se digitar o valor zero.
*/ 
#include<iostream>
#include<locale.h>
using namespace std;

int voto, cand1=0, cand2=0, cand3=0, cand4=0, nulo=0, branco=0;

float total;

int main(){	
	setlocale(LC_ALL,"");
	
	do{
	
	cout<<"Escolha seu voto:\n1 - candidato 1\n2 - candidato 2\n3 - candidato 3\n4 - candidato 4\n5 - voto nulo\n6 - voto em branco\n0 - encerrar\n";
	cin>>voto;	
	
	switch (voto){		
		
		case 1:	
			cand1++;
			break;
		case 2: 
			cand2++;
			break;
		case 3: 
			cand3++;
			break;
		case 4: 
			cand4++;
			break;
		case 5:	
			nulo++;
			break;
		case 6:	
			branco++;
			break;
		case 0: 
			cout<<"Você escolheu sair\n";
			system("PAUSE");
			break;
		
		default: 
			cout<<"Opção inválida!\n";
			system("PAUSE");
		
	}	
	system("cls");
	
	}while(voto!=0);
	
	total = cand1+cand2+cand3+cand4+nulo+branco;
		
	cout<<total<<" votos no total\n";
	cout<<cand1<<" votos para o candidato 1\n";
	cout<<cand2<<" votos para o candidato 2\n";
	cout<<cand3<<" votos para o candidato 3\n";
	cout<<cand4<<" votos para o candidato 4\n";
	cout<<endl<<nulo<<" votos nulos ";
	if(nulo>0)
		cout<<(nulo/total)*100<<"% dos votos\n";
	cout<<endl<<branco<<" votos brancos ";
	if(branco>0)
		cout<<(branco/total)*100<<"% dos votos\n";
	
	if(cand1==cand2 or cand1==cand3 or cand1==cand4 or cand2==cand3 or cand2==cand4 or cand3 == cand4)
		cout << "\nEleição empatada, será necessário outro turno!";
	else if(cand1 > cand2 and cand1> cand3 and cand1 > cand4)
		cout << "\nCandito 1 é eleito! com "<<(cand1/total)*100<<"% dos votos";
	else if(cand2 > cand3 and cand2 > cand4)
		cout << "\nCandito 2 é eleito! com "<<(cand2/total)*100<<"% dos votos";
	else if(cand3 > cand4)
		cout << "\nCandito 3 é eleito! com "<<(cand3/total)*100<<"% dos votos";
	else if(cand4 > 0)
		cout << "\nCandito 4 é eleito! com "<<(cand4/total)*100<<"% dos votos";
	else
		cout << "\nNenhum candidato eleito!";
	


	cout << "\nfim do programa";
}
