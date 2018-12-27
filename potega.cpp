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
    do{
        cout<<"Podaj podstawe potegi: ";
        cin>>a;
        cout<<"Podaj jej wykladnik: ";
        cin>>n;
    } while((a==0)&&(n==0));
    cout<<"Wynik: "<<potega(a,n);
    return 0;
}