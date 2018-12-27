#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a;
	int n;
	cin>>n;
	int i=0;
	while(n>0)
	{
		a[i]=n%2;
//		a[i]=char(48+n%2);
		n/=2;
		i++;
	}
	i--;
	while(i>=0)
	{
		cout<<int(a[i]);
//		cout<<a[i];
		i--;
	}
	return 0;
}
