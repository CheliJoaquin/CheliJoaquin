#include<iostream>
#include<string>
using namespace std;
	
int main()
{
	int n1;
	string cartel="error";
	
	cout<<"Ingresa el dia de la semana del 1 al 7"<<endl;
	cin>>n1;
	
	if(n1==1)
	{
		cartel=" lunes ";
	}
	if(n1==2)
	{
		cartel=" martes ";
	}
	if(n1==3)
	{
		cartel=" miercoles ";
	}
	if(n1==4)
	{
		cartel=" jueves ";
	}
	if(n1==5)
	{
		cartel=" viernes ";
	}
	if(n1==6)
	{
		cartel=" sabado ";
	}
	if(n1==7)
	{
		cartel=" domingo ";
	}
	
	cout<<"Hoy es"<<cartel<<endl;
	
	return 0;
}