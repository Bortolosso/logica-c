#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n1, n2, n3;
	cout<<"\n Qual o primeiro numero:\n";
	cin>> n1;
	cout<<"\n Qual o segundo numero:\n";
	cin>> n2;
	cout<<"\n Qual o terceiro numero:\n";
	cin>> n3;
	if((n1>n2)&&(n1>n3))
	{
		if(n2<n3)
		{
				cout<<"\n N1 e maior \n"<<  n1;
				cout<<"\n n2 e menor \n"<<  n2;
		}
		else
		{
				cout<<"\n N1 e maior \n"<<  n1;
				cout<<"\n n3 e menor \n"<<  n3;
			
		}	
	}
	else
	{
		if(n2>n3)
		{
			if(n1>n3)
			{
				cout<<"\n n2 e maior: \n"<<  n2;
				cout<<"\n n3 e menor: \n"<<  n3;
			}
			else
			{
				cout<<"\n n2 e maior \n"<<  n2;
				cout<<"\n n1 e menor \n"<<  n1;	
			}	
		}
		else		
		{
			if(n1>n2)
			{
				cout<<"\n n3 e maior \n"<<  n3;
				cout<<"\n n2 e menor \n"<<  n2;
			}
			else
			{
				cout<<"\n n3 e maior \n"<<  n3;
				cout<<"\n n1 e menor \n"<<  n1;
			}
		}
	}

 return 0;
}
