#include <iostream>
using namespace std;
int main ()
{
	int idade;
    cout<<"\nNesse programa voce ira saber se voce e ISENTO, FACULTATIVO ou OBRIGATORIA a votacao eleitoral.\n";
    cout<<"\nInforme sua idade:";
    cin>> idade;
    if(idade<16)
    {
        cout<<"Insento";
    }
    if(idade>=16 && idade<18)
    {
        cout<<"Facultativo";
    }
    if(idade>=18 && idade<=70)
    {
        cout<<"Obrigatorio";
    }
    if(idade>=71)
    {
        cout<<"Insento";
    }
}