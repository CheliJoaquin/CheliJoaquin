#include <iostream>
using namespace std;

int main ()
{  
	int a,b,c,d,r;
	cout<<"Ingrese el valor de a"<<endl;
	cin>>a;
	cout<<"Ingrese el valor de b"<<endl;
	cin>>b;
	cout<<"Ingrese el valor de c"<<endl;
	cin>>c;
	cout<<"Ingrese el valor de d"<<endl;
	cin>>d;
	
    r= ((a+b)/2*(c*d)/a)+1;
    cout<<"el resultado es: "<<r;
    return 0;
}