#include <iostream>
using namespace std;
string n;
int k=0;
int main()
{
    cout<<"Podaj n: ";
    getline(cin,n);
    int d=n.size();
    for(int i=0;i<d;i++)
    {
        switch(n[i])
        {
            case'*': k++;break;
            case'%': k++;break;
            case'x': k++;break;
        }
    }
    cout<<"Liczba znakow: "<<k<<".";
    return 0;
}