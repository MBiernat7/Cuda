#include <iostream>
#include <unistd.h>

using namespace std;

string imie; int liczba;

int main()
{

    cout << "Podaj Imie:";
    cin >>imie;
    cout << "Podaj dodatnia liczbe calkowita:";
    cin >>liczba;

    for (int i=1; i<=liczba; i++)
    {
        sleep(1);
        cout<<i<<". "<<imie <<endl;
    }
    return 0;
}
