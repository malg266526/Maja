#include <iostream>
using namespace std;

// oblicz wartosc bezwzgledną

int main() {
    // deklarujemy zmienną calkowitą
    int liczba;

    cout << "Podaj liczbe:" << endl;
    cin >> liczba;

    // jak obliczyć wartośc bewzględną?
    // jesli liczba jest dodatnia, to wartością bezwzględną jest jej wartość
    // jeśli liczba jest ujemna, to wartością jest jej wartość bez minusa

    // żeby sprawdzić czy jest ujemna czy dodatnia, wystarczy sprawdzić czy jest większa od 0

    if (liczba >=0) {
        cout << liczba << endl;
    }

    if (liczba <0) {
        cout << liczba * -1 << endl;
    }

    // zamiast dwóch ifów, możemy też użyc if + else, gdzie else oznacza W PRZECIWNYM WYPADKU
    // wtedy byłoby:
    if ( liczba >=0 ) {
        cout << liczba;
    } else {
        cout << liczba * -1;
    }
}