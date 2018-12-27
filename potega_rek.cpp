#include<iostream>
using namespace std;
int potega(int n,int p)
{
	if(p==0)return 1;
	return n*potega(n,p-1);
}
int main()
{
	int n,p;
	do{
		cout<<"Podaj podstawe potegi oraz jej stopien: ";
		cin>>n>>p;
	}while(n==0&&p==0);
	cout<<potega(n,p);
	return 0;
}