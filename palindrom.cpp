#include<iostream>
#include<string>
using namespace std;
string wyraz;
bool palindrom(string wyraz)
{
	/*int d=wyraz.size();
	for(int i=d-1;i>=0;i--)
	{
		cout<<wyraz2[i];
	}
	if(wyraz2==wyraz)return true;
	else return false;*/
	int d=wyraz.size();
	int left=0, right=d-1;
	while(left<right)
	{
		if(wyraz[left]!=wyraz[right])
		return false;
		left++;
		right--;
	}
	return true;
}
int main()
{
	cout<<"Podaj wyraz: ";
	cin>>wyraz;
	if(palindrom(wyraz))cout<<"jest palindromem";else cout<<"nie jest palindromem";
	return 0;
}
