#include<iostream>
#include<string.h>
using namespace std;
void zamiana(string a,int n, int p)
{
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
	string a;
	int n,p;
	cout<<"Podaj liczbe: ";
	cin>>n;
	cout<<"Podaj podstawe nowego systemu: ";
	cin>>p;
	zamiana(a,n,p);
	return 0;
}