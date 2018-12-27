#include <iostream>
using namespace std;
int horner(string a,int d)
{
	if(d==1)return int(a[d-1])-48;
	return 2*horner(a,d-1)+int(a[d-1])-48;
}
int main()
{
    string a;
    cin>>a;
    cout<<horner(a,a.size());
    return 0;
}