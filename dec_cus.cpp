#include<iostream>
using namespace std;
void zamiana(int n,int p)
{
	if(n!=0)
	{
		zamiana(n/p,p);
		if(n%p>=10)cout<<char(n%p+55);
		else cout<<n%p;
	}
}
void zamiana(int n,int p)
{
	if(n!=0)
	{
		if(n%p<10)
		{
			zamiana(n/p,p);
			cout<<n%p;
		}
		else
		{
			zamiana(n/p,p);
			cout<<char(n%p+55);
		}
	}
}
int main()
{
	int a,p;
	cout<<"Podaj liczbe w sys. decymalnym, a nastepnie jej system na ktory ma byc zamieniona: ";
	cin>>a>>p;
	zamiana(a,p);	
	return 0;
}