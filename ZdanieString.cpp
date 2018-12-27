#include<iostream>
using namespace std;
string zdanie;
int k=1;
int main()
{
	cout<<"Zdanie: ";
	getline(cin,zdanie);
//	int d=zdanie.size();
	int i=0;
	while(zdanie[i]!='.')
	{
		if(zdanie[i]==' ')k++;
		i++;
	}
	cout<<"Wyrazy: "<<k;
	return 0;
}
