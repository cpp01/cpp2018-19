#include <iostream>
#include <string>
using namespace std;
string wyrazy;
int main()
{
    cout<<"Program zamienia a na b";
    cout<<"\nPodaj wyraz(y): ";
    getline(cin,wyrazy);
    int d=wyrazy.size();
    for(int i=0;i<d;i++)
    {
        if(wyrazy[i]=='a')wyrazy[i]='b';
    }
    cout<<wyrazy;
    return 0;
}