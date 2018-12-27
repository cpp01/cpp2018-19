#include<iostream>
using namespace std;
int nwd_eu(int a, int b)
{
	while(a!=b){
		if(a>b)a=a-b; else b=b-a;
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
