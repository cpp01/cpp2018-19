#include<iostream>
#include<cstdlib>
#include<time.h>
#include<iomanip>
using namespace std;
const int n=5;
void sort(int *tab)
{
	for(int i=n-1;i>=1;i--)
		for(int j=0;j<i;j++)
			if(tab[j]>tab[j+1])swap(tab[j],tab[j+1]);
	for(int i=0;i<n;i++)cout<<setw(3)<<tab[i];
}
void sort2(int *tab)
{
	for(int i=0;i<n;i++)
		for(int j=n-1;j>=1;j--)
			if(tab[j]<tab[j-1])swap(tab[j-1],tab[j]);
	for(int i=0;i<n;i++)cout<<setw(3)<<tab[i];
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
	sort(tab);
    // sort2(tab);
	return 0;
}