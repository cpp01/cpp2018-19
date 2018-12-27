#include<iostream>
#include<cstdlib>
#include<time.h>
#include<iomanip>
using namespace std;
const int n=5;
void sort_wyb(int a[])
{
	int min;
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)if(a[j]<a[min])min=j;
		swap(a[i],a[min]);
	}
	for(int i=0;i<n;i++)cout<<setw(3)<<a[i];
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
	sort_wyb(tab);
	return 0;
}