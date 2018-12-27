#include<iostream>
#include<string.h>
using namespace std;
int main()
{
//	string a;
	int n;
	cin>>n;
	int x=0;
	int temp=n;
	while(temp>0)
	{
		temp/=10;
		x++;
	}
	x--;
	int a[x];
	int i=0;
	while(n>0)
	{
		a[i]=n%2;
		n/=2;
		i++;
	}
	i--;
	while(i>=0)
	{
		cout<<a[i];
		i--;
	}
	return 0;
}
