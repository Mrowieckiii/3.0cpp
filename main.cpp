#include  <iostream>
#include <string>
using  namespace  std;

int main() {

    string imie;
    string nazwisko;

    cout << "Podaj swoje imie: " << endl;
    cin >> imie;

    cout << "Podaj swoje nazwisko: " << endl;
    cin >> nazwisko;

    cout << "Witaj " << imie  +  nazwisko << endl;
}