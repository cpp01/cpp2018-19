#include<iostream>
#include<cmath>
using namespace std;
int fib(int n)
{
	int f=1;
	if((n==1)||(n==2))return f;
	int k=1;
	int j=1;
	for(int i=3;i<=n;i++)
	{
		f=k+j;
		k=j;
		j=f;
	}
	return f;
}
bool pierwsza(int n)
{
	if(n<2)return false;
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0)return false;
	return true;
}
int main()
{
	int x=1;
	while(fib(x)<100)
	{
		if(pierwsza(fib(x)))cout<<"Dla argumentu: "<<x<<", wartosc wynosi: "<<fib(x)<<endl;
		x++;
	}
	return 0;
}
