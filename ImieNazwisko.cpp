#include <iostream>
using namespace std;
string imie="Jan";
string nazwisko="Kowalski";
char znak;
int main()
{
    cout<<"Podaj znak: ";
    cin>>znak;
    switch(znak)
    {
        case'i': cout<<imie;break;
        case'n': cout<<nazwisko;break;
        default: cout<<"Bledny znak.";break;
    }
    return 0;
}