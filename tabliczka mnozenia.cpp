#include <iostream>
#include <time.h>
#include <iomanip>
#include <cstdlib>
using namespace std;
int n;
int k=1;
int main()
{
    cin>>n;
    int tab[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            tab[i][j]=(i+1)*(j+1);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<setw(3)<<i;
        for(int j=0;j<n;j++)
        {
            cout<<j<<setw(3)<<tab[i][j];
        }
        cout<<endl;
    }
    return 0;
}