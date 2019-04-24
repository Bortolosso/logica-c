#include <iostream>
using namespace std;
int main()
{
	float tp, sdo;
	cout << "\n Qual a quantidade de titulos protestado:\n"; cin >> tp;
	cout << "\n Qual o seu saldo:\n"; cin >> sdo;
	if(!((tp!=0) || (sdo<0)))
		cout << "\n Voce ganhou o seu cartao de credito!";
	else
		cout << "\n Voce nao ganhou o cartao de credito!";
	return 0;
}
