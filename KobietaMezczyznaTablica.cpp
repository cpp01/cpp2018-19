#include <iostream>
using namespace std;
int n;
int main()
{
    cout<<"Z ilu liter sklada sie imie?";
    cin>>n;
    char imie[n+1];
    cout<<"Podaj imie: ";
    cin>>imie;
    if(imie[n-1]=='a')cout<<"K";else cout<<"M";
    
    return 0;
}