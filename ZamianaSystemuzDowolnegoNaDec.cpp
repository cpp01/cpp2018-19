#include <iostream>
using namespace std;
int horner(string a,int d,int p)
{
	if(d==1)
	{
		if(int(a[d-1]-48)<10)return int(a[d-1]-48);
		else return int(a[d-1]-55);
	}
	else
	{
		if(int(a[d-1]-48<10))return p*horner(a,d-1,p)+int(a[d-1]-48);
		else return p*horner(a,d-1,p)+int(a[d-1]-55);
	}
}
int main()
{
    string a;int p;
    cin>>a>>p;
    cout<<horner(a,a.size(),p);
    return 0;
}