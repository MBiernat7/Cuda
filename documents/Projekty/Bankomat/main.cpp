#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Witam w naszym banku";
    cout << "prosze podac PIN:";
    cin >> PIN;


     if(PIN=="1234")
     {

     cout <<"Pin poprawny";
     }
     else
{


     cout <<"Pin niepoprawny";
}

    return 0;
}
