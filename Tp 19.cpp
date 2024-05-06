#include<iostream>
#include<string>
using namespace std;
	
int main()
{
	int i=0;
	float s,a;
	
	while(i<10)
	{
		cout<<" ingrese un numero "<<endl;
		cin>>a;
		s=s+a;
		i++;
	}
		cout<<"El resultado de la suma es "<<s<<", el promedio es "<<s/10<<endl;
	return 0;
}
