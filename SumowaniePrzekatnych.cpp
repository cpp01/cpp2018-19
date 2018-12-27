#include <iostream>//sumowanie przekatnych
#include<iomanip>
#include<cstdlib>
#include<time.h>
using namespace std;
const int n=5;
int main()
{
    int tab[n][n];
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            tab[i][j]=rand()%15;
            cout<<setw(3)<<tab[i][j];
        }
        cout<<endl;
    }
    int s=0;//glowna
    for(int i=0;i<n;i++)s+=tab[i][i];
    cout<<"1)SUMA: "<<s;
    s=0;
    for(int i=0;i<n;i++)//przeciwna do glownej
    {
        for(int j=n;j>=0;j--)
        if(n-1==j+i)s+=tab[i][j];
    }
    cout<<"\n2)SUMA: "<<s;
    s=0;
    for(int i=0;i<n;i++)//pod glowna
    {
        for(int j=0;j<n;j++)
        if(i-1==j)s+=tab[i][j];
    }
    cout<<"\n3)SUMA: "<<s;
    s=0;
    for(int i=0;i<n;i++)//nad glowna
    {
        for(int j=0;j<n;j++)
        if(i+1==j)s+=tab[i][j];
    }
    cout<<"\n4)SUMA: "<<s;
    //przyklad
    s=0;
    for(int i=0;i<n;i++)//nad przeciwna
    {
        for(int j=n;j>=0;j--)
        if(n-2==i+j)s+=tab[i][j];
    }
    cout<<"\n5)SUMA: "<<s;
    return 0;
}