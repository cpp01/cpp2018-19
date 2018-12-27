#include <iostream>
#include <string>
using namespace std;
string imie;
int dlugosc;
int main()
{
    cout<<"Podaj imie: ";
    cin>>imie;
    dlugosc=imie.size();
    cout<<dlugosc;
    if(imie[dlugosc-1]=='a')cout<<"\nKobieta";else cout<<"\nMezczyzna";
    return 0;
}