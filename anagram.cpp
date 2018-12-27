#include<iostream>
#include<string.h>
using namespace std;
bool anagram(char *w,char *w1)
{
	int d=strlen(w);
	int d2=strlen(w1);
	if(d!=d2)return false;
	else
	{
		bool warunek=0;
		char temp[20];
		strcpy(temp,w1);
		for(int i=0;i<d;i++)
		{
			warunek=0;
			for(int j=0;j<d;j++)
			{
				if(w[i]==temp[j])
				{
					temp[j]='\0';
					warunek=1;
					break;
				}
			}
			if(warunek==0)return false;
		}
	}
	return true;
}
int main()
{
	char w[20];
	char w1[20];
	cout<<"Podaj w i w1: ";
	cin>>w>>w1;
	if(anagram(w,w1))cout<<"w1 jest anagramem w";else cout<<"w1 nie jest anagramem w";	
	return 0;
}