#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;

int liczba;

int main()
{
    cout << "Witam w losowaniu lotto. Za 3 sekundy nastapi zwolnienie blokady!";
    sleep(3);
    cout <<endl;

    srand(time(NULL));

    for (int i=1; i<=6; i++)
    {
    liczba = rand()%49+1;
    sleep(1);
    cout<<liczba <<"\a" <<endl;
    }
        return 0;
}
