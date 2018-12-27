#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;
bool pierwsza(int n)
{
    if(n<2)return false;
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0)return false;
    return true;
}
int main()
{
    ofstream wy("wyniki.txt");
    wy<<"Liczby 3cyfrowe pierwsze mniejsze od 200: ";
    int a=100,b=200;
    while(a<b)
    {
        if(pierwsza(a))wy<<setw(5)<<a;
        a++;
    }
    wy.close();
    return 0;
}