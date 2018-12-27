#include<iostream>
using namespace std;
float horner(float x,float A[],int n)
{
	if(n==0)return A[n];
	else return x*horner(x,A,n-1)+A[n];
}
int main()
{
	int n;
	cout<<"Stopien: ";
	cin>>n;
	float A[n+1];
	float x;
	cout<<"X= ";
	cin>>x;
	int j=1;
	for(int i=0;i<=n;i++)
	{
		cout<<"Podaj wartosc A["<<j<<"] = ";
		cin>>A[i];
		j++;
	}
	cout<<horner(x,A,n);
	return 0;
}