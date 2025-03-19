#include <iostream>
using namespace std;

int main() {
    cout << "Podaj liczbę" << endl;

    // deklarujemy zmienną liczbową, do której wczytamy co użytkownik podał
    int podana;

    cin >> podana;

    // sprawdzamy czy jest większa od 1000
    // CZY - czyli instrukcja warunkowa if (warunek) {}

    if (podana > 1000) {
        cout << "Tak";  // Do wyświetlenia tekstu używamy cudzysłowiu
    }

    // Jeśli nie jest większa, to jest mniejsza lub równa
    if (podana <= 1000) {
        cout << "Mniejsza od 1000";
    }

    return 0;
}