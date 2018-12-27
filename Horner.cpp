#include<iostream>
using namespace std;
int n;//stopien wielomianu
int x;//wartosc dla zmiennej x
int y;//wartosc wielomianu
int main()
{
	cout<<"Podaj stopien wielomianu: ";
	cin>>n;
	cout<<"Podaj wartosc X: ";
	cin>>x;
	int tab[n];//tablica wsp.
	int i=0;
	while(i<=n)
	{
		cout<<"Podaj wsp. "<<i<<" = ";
		cin>>tab[i];
		i++;
	}
	y=tab[0];
	i=1;
	while(i<=n)
	{
		y=y*x+tab[i];
		i++;
	}
	cout<<"Wartosc wielomianu = "<<y;
	return 0;
}
