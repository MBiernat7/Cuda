#include <iostream>

using namespace std;

string Pierwsze, Drugie, Trzecie, Czwarte, Piate, Szoste, Siodme, Osme, Dziewiate, Dziesiate, Jedenaste, Dwunaste;

int main()
{
    cout << "Witam w milionerach !" <<endl;
    cout << "Zagramy o milion, przed Toba 12 pytan, Zaczynajmy !" <<endl;
    cout << "Pierwsze pytanie:" <<endl;
    cout << "Jak nazywa sie pierwszy krol polski?" <<endl;
    cout << "a) Janek" <<endl;
    cout << "b) Zdzisek " <<endl;
    cout << "c) Martyna " <<endl;
    cout << "d) Boleslaw Chrobry " <<endl;
    cout << "Odpowiedz to:";
    cin >> Pierwsze;

    if ((Pierwsze=="Boleslaw Chrobry") || ("d"))
        {
        cout << "Tak to poprawna odpowiedz ! Gratulacje, wygrales 500zl !";
        }
        else
{
        cout << "Niestety ! To nie jest prawidlowa odpowiedz!";
}
    return 0;
}
