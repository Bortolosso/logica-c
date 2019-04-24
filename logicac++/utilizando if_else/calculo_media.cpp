#include <iostream>
using namespace std;
int main()
{
	float av1, av2, media;
	cout<<"\n Insira sua primeira nota:\n"; cin>> av1;
	cout<<"\n Insira sua segunda nota:\n"; cin>> av2;
	
	media = (av1 + av2) / 2;
	
	if (media >= 6){
		cout<<"Aprovado!";
		if(media >= 9){
			cout<<"Parabens !";
		}
	}else {
		if(media>= 2)
			cout<<"Exame!";
		else
			cout<<"Reprovado!";
	}
	return 0;
}
