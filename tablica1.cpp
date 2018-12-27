#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout<<"Podaj wielkosc tablicy: ";
    cin>>n;
    int tab[n][n];
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j<n)tab[i][j]=j+i;
            else
            {
                int k=i+j-n+1;
                tab[i][j]=tab[i-k][j-k];
            }
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