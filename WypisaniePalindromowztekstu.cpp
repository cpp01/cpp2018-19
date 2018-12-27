#include <iostream>
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
/*
bool palindrom(string wyraz)
{
    int d=wyraz.size();
    int l=0, r=d-1;
    while(l<r)
    {
        if(wyraz[l]!=wyraz[r])return false;
        l++;
        r--;
    }
    return true;
}
*/
int main()
{
    cout<<"Podaj wyraz(y): ";
    getline(cin,wyraz);
    wyraz+=' ';
    int d=wyraz.size();
    string wyraz2;
    for(int i=0;i<d;i++)
    {
        if(wyraz[i]!=' ')wyraz2+=wyraz[i];
        else if(palindrom(wyraz2))
        {
            cout<<wyraz2<<endl;
            wyraz2="";
        }
        else wyraz2="";
    }
    return 0;
}