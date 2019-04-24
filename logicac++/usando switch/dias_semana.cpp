#include <iostream>
#include <stdio.h>
using namespace std;
int main ()
{
	int week;
	
	cout << "\n Escolha o numero de 1 a 7:";
	cin >> week;
	
	switch(week)
	{
		case 1:
			cout<<"\n Segunda-Feira";
			break;
		case 2:
			cout<<"\n Terça-Feira";
			break;
		case 3:
			cout<<"\n Quarta-Feira";
			break;
		case 4:
			cout<<"\n Quinta-Feira";
			break;
		case 5:
			cout<<"\n Sexta-Feira";
			break;
		case 6:
			cout<<"\n Sabado";
			break;
		case 7:
			cout<<"\n Domingo";
			break;
	} 
	
	return 0; 
	
}
