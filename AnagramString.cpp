#include <iostream>
using namespace std;
string w, w1;
bool anagram(string w,string w1)
{
    int d=w.size();
    int d1=w1.size();
    if(d!=d1)return false;
    else
    {
        bool c;
        string temp=w1;
        for(int i=0;i<d;i++)
		{
			c=0;
			for(int j=0;j<d;j++)
			{
				if(w[i]==temp[j])
				{
					temp[j]='\0';
					c=1;
					break;
				}
			}
			if(c==0)return false;
		}
	}
	return true;
}
int main()
{
    cout<<"Podaj w i w1: ";
    cin>>w>>w1;
    if(anagram(w,w1))cout<<"Tak";else cout<<"Nie";
    return 0;
}