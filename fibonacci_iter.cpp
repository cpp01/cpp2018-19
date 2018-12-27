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
	int n;
	cin>>n;
	cout<<"Wyraz nr"<<n<<":"<<fib(n);
	return 0;
}