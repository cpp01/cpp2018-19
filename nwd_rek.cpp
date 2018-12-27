#include <iostream>
using namespace std;
int nwd(int a,int b)//odejmowanie
{
    if(a!=b)
    {
    	if(a>b)return nwd(a-b,b);
    	else return nwd(a,b-a);
	}
}
int nwd2(int a,int b)//dzielenie
{
    if(b!=0)return nwd2(b,b%a);
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<nwd(n,m);
    return 0;
}