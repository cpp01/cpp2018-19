#include<iostream>
using namespace std;
int tab[9]={1,2,5,10,20,50,100,200,500};
int MaxNominal(int r)
{
	int max;
	int i=9;
	do{
		max=tab[i-1];
		i--;
	}while(tab[i]>r);
	return max;
}
int main()
{
	int r,ile;
	cout<<"Podaj R:";cin>>r;
	while(r!=0)
	{
		ile=r/MaxNominal(r);
		cout<<MaxNominal(r)<<" PLN x "<<ile<<endl;
		r-=(ile*MaxNominal(r));
	}
	return 0;
}
