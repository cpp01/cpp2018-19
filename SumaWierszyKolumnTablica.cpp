#include<iostream>
#include<iomanip>
#include<time.h>
#include<cstdlib>
using namespace std;
const int n=2;
int s=0;
int main()
{
    int tab[n][n];
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            tab[i][j]=rand()%10;
        }
    }

    for(int i=0;i<n;i++)
    {
        int s=0;
        for(int j=0;j<n;j++)
        {
            s+=tab[i][j];//suma wierszy
            cout<<setw(3)<<tab[i][j];
        }
        cout<<"   S="<<s;
        cout<<endl;
    }
    //suma kolumn
    for(int j=0;j<n;j++)
    {
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=tab[i][j];
        }
        cout<<" S:"<<s;
    }
    
    return 0;
}