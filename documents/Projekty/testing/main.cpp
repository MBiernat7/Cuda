#include <iostream>

using namespace std;

int l1,l2,l3,l4,l5;
float suma,srednia,wynik;


int main()
{
    cout <<"Witaj! Program ten podaje najblizsza liczbe z sredniej 5 liczb wybranych na klawiaturze!"<<endl;
    cout << "Podaj 5 liczb oddzielajac je spacja: " << endl;
    cin>>l1>>l2>>l3>>l4>>l5;

    suma = l1+l2+l3+l4+l5;
    srednia = suma / 5;

    cout <<"Srednia z tych liczb wynosi: "<<endl;
    cout <<srednia<<endl;






    cout <<"Najblizsza liczba z sredniej to: "<<endl;
    cout <<wynik;



    return 0;
}
