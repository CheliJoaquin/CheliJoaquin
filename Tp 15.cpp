#include<iostream>
#include<string>
using namespace std;
	
int main()
{
	int n;
	cin>>n;
	
	if(n<=5)
	{
		for(int i;i<n;i++)
		{
			cout<<"Hola mundo "<<endl;
		}
	}
	else
	{
		cout<<"El numero es incorrecto";
	}
	
	return 0;
}
