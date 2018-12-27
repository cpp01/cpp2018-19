#include<iostream>
using namespace std;
int nwd_eu(int a, int b)
{
	int k;
	while(b!=0)
	{
		k=b;
		b=a%b;
		a=k;
	}
	return a;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<endl<<"NWD("<<a<<","<<b<<") = "<<nwd_eu(a,b);
	return 0;
}
