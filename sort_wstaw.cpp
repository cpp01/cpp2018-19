#include<iostream>
#include<time.h>
#include<cstdlib>
#include<iomanip>
#include<algorithm>
using namespace std;
const int n=5;
void sort_wstaw(int *tab)
{
    int temp, j;
    for(int i=1;i<n;i++)
    {
        temp=tab[i];
        for(j=i-1;(j>=0&&tab[j]>temp);j--)tab[j+1]=tab[j];
        tab[j+1]=temp;
    }
}
int main()
{
    srand(time(0));
    int tab[n];
    for(int i=0;i<n;i++)
    {
        tab[i]=rand()%90+10;
        cout<<setw(3)<<tab[i];
    }
    cout<<endl;
    sort_wstaw(tab);
    // sort(tab,tab+n);
    for(int i=0;i<n;i++)cout<<setw(3)<<tab[i];
    return 0;
}