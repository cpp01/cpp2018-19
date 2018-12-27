#include <iostream>
using namespace std;
bool doskonala(int n)
{
    if(n<6)return false;
    else{
    int s=0;
    for(int i=1;i<n;i++)
    if(n%i==0)
    s+=i;
    if(s==n)return true; else return false;
    }
}
int main()
{
    int x;
    cout<<"Podaj liczbe: ";
    cin>>x;
    if(doskonala(x))cout<<"Tak"; else cout<<"Nie";
    return 0;
}
