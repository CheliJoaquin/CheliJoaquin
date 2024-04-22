#include <iostream>
#include <string>
using namespace std;
int main()
{
    string culpable;

    string cartel="si o no";
    cout<<"eres culpable?"<<endl;
    cin>>culpable;
    if(culpable=="si")
    {
	cartel="iras a la carcel";
    }
    if(culpable=="no")
    {
    cartel="iras a casa";
	}

    cout<<cartel<<endl;
    return 0;
       
}