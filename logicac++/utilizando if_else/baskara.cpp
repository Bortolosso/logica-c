#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float a, b, c, x1, x2, delta;
	cout<<"\nDigite o valor A:\n";
	cin>>a;
	cout<<"\nDigite o valor B:\n";
	cin>>b;
	cout<<"\nDigite o valor C:\n";
	cin>>c;
	delta=b*b - 4*a*c;
	x1 = (-b - sqrt(delta)) / (2*a);
	x2 = (-b + sqrt(delta)) / (2*a);
	if (delta<0 )
	cout<< ("\nA esquação não possui raizes reais\n");
	else
	cout<<("\nO valor de x1 sera:") << x1 <<"\n";
	cout<<("\nO valor de x2 sera:") << x2 <<"\n";
	system ("pause");
	return 0;
}
