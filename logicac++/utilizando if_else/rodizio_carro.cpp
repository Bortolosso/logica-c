#include <iostream>
using namespace std;

int main()
{
	int placa, sobra;
	
	cout<<"\nESSE PROGRAMA ANALISA SE SUA PLACA ESTA EM DIA DE RODIZIO\n";
	cout<<"=========================================================\n";
	cout<<"\n=========================================================\n";
	cout<<"Diga os quatro numeros da sua placa (####) :";

	cin>>placa;
	
	sobra = 0;
	sobra = placa % 10;
	
	if((sobra == 1)|| (sobra == 2)){
		cout<<"Rodizio de SEGUNDA !";
	}
	else{
		if((sobra == 3)|| (sobra == 4)){
			cout<<"Rodizio de TERCA !";
		}
		else{
			if((sobra == 5)|| (sobra == 6)){
				cout<<"Rodizio QUARTA !";
			}
			else{
				if((sobra == 7)|| (sobra == 8)){
					cout<<"Rodizio QUINTA !";
				}
				if((sobra == 9)|| (sobra == 0)){
					cout<<"Rodizio SEXTA !";
				}
			}
		}	
	}
	
	return 0;
}
