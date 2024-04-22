#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n1,n2;
    string p="el primer numero es mas grande";
        cout<<"ingrese dos numeros"<<endl;
    cin>>n1;
    cin>>n2;
   
    if(n2>n1)
    {
    p="el segundo numero es mas grande";
    }
        if(n1==n2)
        {
        p="iguales";
        }
       
    cout<<p<<endl;
    return 0;
       
}