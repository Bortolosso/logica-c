#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char nome[50], sobrenome[50], nomecompleto[100];
	cout << "Entre com o nome ";
	cin >> nome;
	cout << "Entre com o sobrenome ";
	cin >> sobrenome;
	cout << "\nNome completo: " << nomecompleto;
	strcpy(nomecompleto, nome);
	cout << "\nNome completo: " << nomecompleto;
	strcat(nomecompleto," ");
	cout << "\nNome completo: " << nomecompleto;
	strcat(nomecompleto,sobrenome);
	cout << "\nNome completo: " << nomecompleto;
	
	cout << "\nNome completo: " << nomecompleto << "\n";
	
	return 0;         
	
}
