#include<iostream>
#include<iomanip>
#include<cmath>
#include<time.h>
#include<cstdlib>
using namespace std;
const int n=15;
int a[n], s=0;
bool pierwsza(int n)
{
    if(n<2)return false;
    else
        for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
    return true;
}
int main()
{
    srand(time(NULL));
    for(int i=0;i<n;i++)
    a[i]=100+rand()%100;
    
    cout<<"\nTwoje liczby: ";
    for(int i=0;i<n;i++)
    cout<<setw(5)<<a[i];
    
    cout<<"\nLiczby pierwsze: ";
    for(int i=0;i<n;i++)
    if(pierwsza(a[i]))cout<<setw(5)<<a[i];
    
    for(int i=0;i<n;i++)
    s+=a[i];
    cout<<"\nSuma wynosi: "<<s;

    cout<<"\nLiczby w ktorej jest 7 na koncu: ";
    for(int i=0;i<n;i++)
    if(a[i]%10==7)cout<<setw(5)<<a[i];
    
    cout<<"\nLiczby ktorych suma cyfr jest parzysta: ";
    for(int i=0;i<15;i++)
    {
        int s2=0;
        int x=a[i];
        while(x>0){
            s2+=x%10;
            x/=10;
        }
        if(s2%2==0)cout<<setw(5)<<a[i];
    }
    return 0;
}