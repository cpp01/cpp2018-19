#include <iostream>
using namespace std;
string spolgloski="bcdfghjklmnprstwyz";
string wyrazy;
int k=0;
int main()
{
    cout<<"Podaj wyraz(y): ";
    cin>>wyrazy;
    int d=spolgloski.size();
    int d2=wyrazy.size();
    for(int i=0;i<d2;i++)
    {
        for(int j=0;j<d;j++)
        if(wyrazy[i]==spolgloski[j])k++;
    }
    cout<<"\nLiczba spolglosek: "<<k;
    return 0;
}