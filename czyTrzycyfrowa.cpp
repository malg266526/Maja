#include <iostream>
using namespace std;

// sprawdz czy wczytana liczna jest trzycyfrowa

int main() {

    // deklarujemy zmienną calkowitą
    int liczba;

    cout << "Podaj liczbe:" << endl;
    cin >> liczba;

    // kiedy liczba jest trzycyfrowa?
    // kiedy jest wieksza od 99 i mniejsza lub równa 99

    // do sprawdczenia CZY warunek zachodzi, uzywamy instrukcji warunkowej IF
    // dwa warunki łączymy operatorem AND czyli &&

    if (liczba > 99 && liczba <= 999 ) {
        cout << "TAK" << endl;
    }
    // do określenia co się dzieje w przeciwnym wypadku używamy operatora ELSE
    // else idzie w parze z IF: if (warunek) {} else {}
    else {
        cout << "NIE" << endl;
    }

    return 0;
}