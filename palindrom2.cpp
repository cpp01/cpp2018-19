#include<iostream>
#include<string>
using namespace std;
string wyraz;
bool palindrom(string wyraz)
{
	string wyraz2;
	int d=wyraz.size();
	for(int i=d-1;i>=0;i--)
	{
		wyraz2+=wyraz[i];
	}
	if(wyraz2==wyraz)return true;
	else return false;
}
int main()
{
	cout<<"Podaj wyraz: ";
	cin>>wyraz;
	if(palindrom(wyraz))cout<<"jest palindromem";else cout<<"nie jest palindromem";
	return 0;
}
