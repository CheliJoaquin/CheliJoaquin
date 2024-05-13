#include<iostream>
#include<string>
using namespace std;
	
int main()
{
	int r,n1;
	int a=0;
	int b=0;
	
	for(int i=1; i<5; i++)
	{
		cout<<"Ingrese un numero"<<endl;
		cin>>n1;
		r=n1%2;
		if(r==0)
		{
			a++;
		}
		if(r>0)
		{
			b++;
		}
	}
	cout<<"Hay "<<a<<" numeros pares, y "<<b<<" numeros impares"<<endl;
	
	return 0;
}