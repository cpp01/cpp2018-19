#include <iostream>
using namespace std;

int main()
{
    int h;
    cin>>h;
    for(int i=1;i<=h-2;i++)
    {
        for(int j=1;j<=h-i;j++)cout<<" ";
        for(int k=1;k<=i;k++)cout<<" *";
        cout<<endl;
    }
    for(int p=1;p<=h;p++)cout<<" ";
    cout<<"*";
    cout<<endl;
    for(int o=1;o<=h-1;o++)cout<<" ";
    cout<<"* *";
    return 0;
}
