#include <iostream>
using namespace std;
bool palindrom(int liczba[],int k)
{
    int l=0, r=k-1;
    while(l<r)
    {
        if(liczba[l]!=liczba[r]) return false;
        l++;r--;
    }
    return true;
}
int main()
{
    int n;
    cout<<"Podaj liczbe: ";
    cin>>n;
    int n2=n;
    int k=0;//licznik
    if(n2==0)cout<<"1, tak";
    else
    {
        while(n2>0)//ile cyfr
        {
            n2/=10;
            k++;
        }
        cout<<"Liczba cyfr: "<<k;
        cout<<endl;
        int tab[k];
        n2=n;
        for(int i=0;n2>0;i++)
        {
            tab[i]=n2%10;
            n2/=10;
        }
        if(palindrom(tab,k))cout<<"Tak";else cout<<"Nie";
    }
    return 0;
}