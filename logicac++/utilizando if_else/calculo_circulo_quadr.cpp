#include <iostream>
using namespace std;
int main ()
{
	int opcao;
	float area, raio, lado, areaq;
	
	cout<<"\nOi, esse programa calcula a area do quadrado e o circulo.\n";
	cout<<"\nDigite 1 para calcular o circulo\n";
	cout<<"\nDigite 2 para calcular o quadrado\n";
	cout<<"\nDigite sua opcao:";
	cin>> opcao;
	
	if (opcao==1){
		cout<<"\nVOCE SELECIONOU O CALCULO DO CIRCULO !\n";
		cout<<"\nIndique o raio do circulo para descobrir sua area:";
		cin>> raio;
		area = 3.1416 * raio * raio;
		cout<<"\nA area do CIRCULO equivale a:" <<area;
		}
	else
		if(opcao==2){
			cout<<"\nVOCE SELECIONOU AO CALCULO DA AREA DO QUADRADO!\n";
			cout<<"\nIndique o lado do quadrado:";
			cin>> lado;
			areaq = lado * lado;
			cout<<"\nA area do QUADRADO equivale a:";	}
		else
			cout<<"\nDigite um numero entre 1 ou 2.";
	return 0;
}
