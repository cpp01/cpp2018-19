#include<iostream>
#include<string.h>//aby dzialal str...
using namespace std;
string zdanie;

int main()
{
	char a[20];
	char b[20];
	char c[20];
	cout<<"Podaj zdanie 3wyrazowe: ";
	cin>>a>>b>>c;
	cout<<a<<endl<<b<<endl<<c<<endl;
	int d=strlen(a);
	cout<<d;
	return 0;
}