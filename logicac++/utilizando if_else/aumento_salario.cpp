#include <iostream>
using namespace std;
int main ()
{
	float salario, cincoporcem; 
	
	cout<<"\Digite seu salario:\n";
	cin>> salario;
	
	cincoporcem = salario * 0.05;
	
	if (salario >= 5000)
		cout<< "\nSeu salario vai para\n", cincoporcem; 
		
	return 0;
}
