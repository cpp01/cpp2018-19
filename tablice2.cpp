#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout<<"Podaj wielkosc tablicy: ";
    cin>>n;
    int temp=n-1;
    int temp2=n-2;
    int tab[n][n];
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0)
            {
                tab[i][j]=temp;
                temp--;
                continue;
            }
            if(j==0)
            {
                tab[i][j]=temp2;
                temp2--;
                continue;
            }
            tab[i][j]=tab[i-1][j-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<setw(3)<<tab[i][j];
        }
        cout<<endl;
    }
    return 0;
}