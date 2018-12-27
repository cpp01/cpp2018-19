#include <iostream>
using namespace std;
int potega(int a,int n)
{
    int p=1;
    for(int i=1;i<=n;i++)
    {
        p*=a;
    }
    return p;
}
int main()
{
    int a,n;
    loop:cout<<"Podaj podstawe potegi: ";
    cin>>a;
    cout<<"Podaj jej wykladnik: ";
    cin>>n;
    if((a==0)&&(n==0))goto loop;
    cout<<"Wynik: "<<potega(a,n);
    return 0;
}