#include <iostream>
using namespace std;
string liczba;
bool palindrom(string liczba)
{
    int d=liczba.size();
    int l=0, r=d-1;
    while(l<r)
    {
        if(liczba[l]!=liczba[r]) return false;
        l++;r--;
    }
    return true;
}
int main()
{
    cout<<"Podaj liczbe: ";
    cin>>liczba;
//  to_string(int liczba);
    if(palindrom(liczba))cout<<"Tak";else cout<<"Nie";
    return 0;
}