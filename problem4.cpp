#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a;
	int n,p;
	cout<<"Podaj liczbe: ";
	cin>>n;
	cout<<"Podaj podstawe nowego systemu: ";
	cin>>p;
	int i=0;
	while(n>0)
	{
//		a[i]=n%p;
		if(n%p<10)a[i]=char(48+n%p);else a[i]=char(55+n%p);
		n/=p;
		i++;
	}
	i--;
	while(i>=0)
	{
//		cout<<int(a[i]);
		cout<<a[i];
		i--;
	}
	return 0;
}
