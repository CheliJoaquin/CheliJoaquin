#include<iostream>
#include<string>
using namespace std;
	
int main()
{
	int a,b;
	int c=0;
	int d=0;
	int i=0;
	
	cout<<"ingrese la cantidad de numeros que va a ingresar"<<endl;
	cin>>a;
	cout<<"Ingrese "<<a<<" numeros"<<endl;
	while(i<a)
	{
		cin>>b;
		i++;
		if(b>=10 && b<=20)
		{
			c++;
		}
		else
		{
			d++;
		}
	}
	cout<<c<<" in, "<<d<<" out"<<endl;
	return 0;
}