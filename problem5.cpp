#include <iostream>//dowolna liczba na system binarny, badanie czy suma cyfr jest liczba pierwsza
#include <cmath>
using namespace std;
bool pierwsza(int n)
{
    if(n<2)return false;
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0)return false;
    return true;
}
int main()
{
    string a;
    int n,k=0;
    cin>>n;
    int i=0;
    while(n!=0)
    {
        a[i]=n%2;
        k+=n%2;
        n/=2;
        i++;
    }
    i--;
    while(i>=0)
    {
        cout<<int(a[i]);
        i--;
    }
    cout<<endl;
    if(pierwsza(k))cout<<"Tak"; else cout<<"Nie";
    return 0;
}