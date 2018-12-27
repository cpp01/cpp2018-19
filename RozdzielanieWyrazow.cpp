#include <iostream>
using namespace std;
string wyrazy;
int main()
{
    cout<<"Podaj wyraz(y): ";
    getline(cin,wyrazy);
    int i=0;
    while(wyrazy[i]!='.')
    {
        if(wyrazy[i]==' ')cout<<endl;
        else cout<<wyrazy[i];
        i++;
    }
    return 0;
}