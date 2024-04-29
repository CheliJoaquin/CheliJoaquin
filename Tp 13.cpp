#include <iostream>
#include <string>
using namespace std;
int main()
{ 
	string cartel="El numero es negativo";
	float a,p;
	
	cout<<"ingese el numero"<<endl;
	cin>>a;

	if(a==0)
	{
	cartel="El numero es 0";
	}
	if(a>0)
	{
	cartel="El numero es positivo";
	}
	
	cout<<cartel<<endl;
	
	return 0;	
}