#include <iostream>
#include <time.h>
#include <iomanip>
#include <cstdlib>
using namespace std;
const int n=5;
void wyp(int *tab,int k)
{
    for(int i=0;i<k;i++)
    {
    	cout<<setw(3)<<(int)*tab;
    	*tab++;
	}
}
int min(int *tab, int wartosc)
{
	int min;
	min=*tab;
	for(int i=1;i<=wartosc;i++)
	{
		if(*tab<min)min=*tab;
		tab++;
	}
	return min;
}
int max(int *tab,int wartosc)
{
	int max;
	max=*tab;
	for(int i=1;i<=wartosc;i++)
	{
		if(*tab>max)max=*tab;
		tab++;
	}
	return max;
}
int main()
{
    int pol;
    if(n%2!=0)pol=n/2+1;
    else pol=n/2;
    
    int *MIN;
    MIN=new int [pol];
    int *MAX;
    MAX=new int [pol];
    
    srand(time(NULL));
    cout<<"Tablica: ";
    int tab[n];
    for(int i=0;i<n;i++)
    {
        do tab[i]=10+rand()%90;
        while(tab[i]%2!=0);
        cout<<setw(3)<<tab[i];
        // if(n%2!=0)int temp=tab[n-1];
    }
    cout<<endl;
    int i=0;
    int k=0;
    while(k<pol)
    {
        if(tab[i]>tab[i+1])
        {
            MAX[k]=tab[i];
            MIN[k]=tab[i+1];
        }
        else
        {
            MIN[k]=tab[i];
            MAX[k]=tab[i+1];
        }
        k++;
        i++;
        i++;
    }
    if(n%2!=0)
    {
        MIN[pol-1]=tab[n-1];
        MAX[pol-1]=tab[n-1];
    }
    cout<<"Kandydaci Max: "; wyp(MAX,pol);
    cout<<"\nKandydaci Min: "; wyp(MIN,pol);
    cout<<"\nMAX: "<<max(MAX,pol);
    cout<<"\nMIN: "<<min(MIN,pol);
    delete [] MIN;
    delete [] MAX;
    return 0;
}