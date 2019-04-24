#include <iostream>
using namespace std;

int main()
{
	float altura, largura, perimetro, area;
	
	cout<< "Diga a altura do seu terreno: ";
	cin>> altura;
	cout<< "Diga a largura do seu terreno: ";
	cin>> largura;
	perimetro = (altura + altura) + (largura + largura);
	area = altura * altura;	
	
	cout<< "O perimetro total é de" << perimetro << "\n"; 
	cout<< "\n E a area é de \n" << area << "\n";
	
	
	return 0;
}

