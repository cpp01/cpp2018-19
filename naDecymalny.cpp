#include<iostream>
using namespace std;
int zamiana(string liczba,int p)
{
	int n=liczba.size();
	int y;
	if(int(liczba[0])<65)y=int(liczba[0])-48;
	else y=int (liczba[0])-55;
	for(int i=1;i<n;i++)
	{
		if(int(liczba[i])<65)y=y*p+int(liczba[i])-48;
		else y=y*p+int(liczba[i])-55;
	}
	return y;
}
int main()
{
	cout<<"Podaj podstawe systemu: ";
	int p;cin>>p;
	cout<<"Podaj liczbe w systemie "<<p<<": ";
	string a;cin>>a;
	cout<<zamiana(a,p);
	return 0;
}
