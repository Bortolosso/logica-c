 #include <iostream>
using namespace std;

int main()
{
	float av1, av2, media;
	
	cout<< "\nEntre com a nota AV1 :";
	cin>> av1;
	
	cout<< "\n Entre com a nota AV2 :";
	cin>> av2;
	
	media = (av1 + av2) / 2;
	
	printf("%.1f", media);
}
