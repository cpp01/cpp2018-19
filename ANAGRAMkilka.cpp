#include <iostream>
using namespace std;
string tekst;
bool anagram(string w,string w1)
{
    int d=w.size();
    int d1=w1.size();
    if(d!=d1)return false;
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
    return true;
}
int main()
{
    cout<<"------1-Slowo podst.  /  2,3,4...Wyrazy do sprawdzenia------";
    cout<<"\nPodaj anagramy: ";
    getline(cin,tekst);
    tekst+=' ';
    int d=tekst.size();
    string wyrazpodst;
    int j=0;
    while(tekst[j]!=' ')
    {
        wyrazpodst+=tekst[j];
        j++;
    }
    cout<<"Wyraz podstawowy: "<<wyrazpodst;
    string wyraz2;
    cout<<"\nAnagramy do wyrazu "<<wyrazpodst<<": ";
    while(j<d)
    {
        if(tekst[j]!=' ')
        {
            wyraz2+=tekst[j];
        }
        if(anagram(wyrazpodst,wyraz2))
        {
            cout<<wyraz2<<" ";
            wyraz2="";
        }
        j++;
    }
    return 0;
}