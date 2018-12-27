#include<iostream>
using namespace std;
int fib(int n)
{
	int f=1;
	if((n==1)||(n==2))return f;
	int k=1,j=1;
	int i=3;
	while(i<=n)
	{
		f=k+j;
		k=j;
		j=f;
		i++;
	}
	return f;
}
int main()
{
	int i=1;
	while(fib(i)<100)
	{
		if(fib(i)>9)cout<<fib(i)<<endl;
		i++;
	}
	return 0;
}