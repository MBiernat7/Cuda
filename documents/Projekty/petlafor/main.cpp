#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{

    for (int i=1; i<=15; i++)
    {
        sleep(1);
        system("clear");
       cout<< i <<endl;

    }
    cout<<"Jebut" <<endl;
    return 0;
}
