#include <iostream>
#include <stdio.h>
using namespace std;
int main ()
{
	int opcao;
	float rh, rm, h ;
	cout<<"\n Digite 1 para Homem:";
	cout<<"\n Digite 2 para Mulher"; 
	cout<<"\nEscolha a variavel desejada:"; cin >> opcao;
	cout<< "\n Qual a sua altura em CM:"; cin >> h;
	
	if(opcao==1)
		{		
			rh = (72.7 * h) - 58;
			cout<<"\nPor ser HOMEM seu peso ideal seria de:"<<rh;
		}
	else
		if(opcao==2)
			{
				rm = (62.1 * h) - 44.7;
				cout<<"\nPor ser MULHER seu peso ideal seria de:"<<rm;
			}
	return 0;
}
