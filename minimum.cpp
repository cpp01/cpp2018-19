#include <iostream>
#include <iomanip>
#include <time.h>
#include <cstdlib>
using namespace std;
int const n=15;
void zamiana(int n, int p)
{
    string a;
	int i=0;
	while(n>0)
	{
		if(n%p<10)a[i]=char(48+n%p);else a[i]=char(55+n%p);
		n/=p;
		i++;
	}
	i--;
	while(i>=0)
	{
		cout<<a[i];
		i--;
	}
}
int main()
{
    srand(time(NULL));
    int tab[n];
    int i=0;
    while(i<n)
    {
        tab[i]=10+rand()%90;
        if(tab[i]%2!=0)
        {
            tab[i]=10+rand()%90;
        }
        cout<<setw(3)<<tab[i];
        i++;
        // if(tab[i]%2==0)
        // {
        //     cout<<setw(3)<<tab[i];
        //     i++;
        // }
    }
    cout<<endl;
    int min=tab[0];
    i=1;
    while(i<n)
    {
        if(tab[i]<min)min=tab[i];
        i++;
    }
    cout<<"System dziesiatkowy: "<<min;
    cout<<"\nSystem binarny: ";zamiana(min,2);
    cout<<"\nSystem hexadecymalny: ";zamiana(min,16);
    return 0;
}
