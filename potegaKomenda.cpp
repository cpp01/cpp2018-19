#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    long double a,b;
    do{
        cout<<"Podaj podstawe potegi: ";
        cin>>a;
        cout<<"Podaj jej wykladnik: ";
        cin>>b;
    }while((a==0)&&(b==0));
    cout<<setprecision(1000);
    cout<<pow(a,b);
    return 0;
}