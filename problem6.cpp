#include <iostream>
using namespace std;

int main()
{
    string a;
    int n, k=0;
    cin>>n;
    int i=0;
    while(n!=0)
    {
        if(n%16<10)a[i]=char(48+n%16);
        else
        {
            a[i]=char(55+n%16);
            k++;
        }
        n/=16;
        i++;
    }
    i--;
    while(i>=0)
    {
        cout<<a[i];
        i--;
    }
    cout<<endl;
    cout<<k;
    return 0;
}