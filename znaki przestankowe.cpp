#include<iostream>
using namespace std;
string zdanie;
int k=0;
int main()
{
	cout<<"Zdanie: ";
	getline(cin,zdanie);
//	int d=zdanie.size();
	int i=0;
	while((zdanie[i]!='.')&&(zdanie[i]!='?')&&(zdanie[i]!='!'))
	{
		if(zdanie[i]==',')k++;
		if(zdanie[i]==':')k++;
		if(zdanie[i]==';')k++;
		if(zdanie[i]=='-')k++;
		i++;
	}
	cout<<"znaki przestankowe: "<<k+1;
	return 0;
}
