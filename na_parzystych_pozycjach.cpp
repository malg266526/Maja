#include <iostream>
#include <ostream>
using namespace std;

// znaki na parzystych pozycjach w tekście

int main() {
    cout << "Wpisz tekst" << endl;

    // deklarujemy zmienną tekstową, do której wczytamy co użytkownik podał
    string text;

    cin >> text;

    // mamy zacząć od ostatniego znaku na parzystej kolejności
    // wiemy więc, że będziemy szli od końca - od długości słowa
    // do początku słowa, czyli do literki na polu nr 0
    // i będziemy szli co dwa pola - bo tylko parzyste pozycje

    // najpierw musimy się dowiedzieć od jakiego indeksu zaczynamy, więc sprawdzamy długość słowa

    int dlugoscSlowa = text.size();

    // liczymy literki od 0, a nie od 1, dlatego ostatni indeks to dlugość słowa - 1
    // P R Z Y K Ł A D
    // 0 1 2 3 4 5 6 7
    // 8 znaków, a ostatni indeks to 7

    int ostatniIndeks = dlugoscSlowa - 1;

    // teraz musimy znaleźć ostatni parzysty indeks
    // na początek weźmiemy po prostu ostatni indeks (indeks czyli miejsce literki w ciągu znaków słowa - na którym jest miejscu)
    int ostatniParzystyIndeks = ostatniIndeks;

    cout << "ostatniIndeks " << ostatniIndeks << endl;
    cout << "ostatniParzystyIndeks " << ostatniParzystyIndeks << endl;

    // teraz sprawdzamy czy jest to liczba parzysta, jeśli nie jest, to musimy wziąć literkę z miejsca o jedno wcześniej, wtedy będzie parzysta
    // do sprawdzenia parzystości bierzemy operator reszty z dzielenia czyli %

    int resztaZDzielenia = ostatniIndeks % 2;

    cout << "resztaZDzielenia " << resztaZDzielenia << endl;

    // liczba jest parzysta, jeśli nie ma reszty z dzielenia przez 2, czyli reszta to 0
    // sprawdzamy CZY tak jest
    // CZY = instrukcja warunkowa IF (warunek)

    // jeśli jest reszta z dzielenia, to liczba nie była parzysta
    if (resztaZDzielenia == 1) {
        ostatniParzystyIndeks = ostatniIndeks - 1;
    }

    cout << "ostatniParzystyIndeks " << ostatniParzystyIndeks << endl;

    // teraz robimy pętle od ostatniego znaku na parzystej pozycji, do początku słowa, czyli do znaku na pozycji 0
    // idziemy co dwa pola - parzyste pola - ale nie dodajemy, tylko odejmujemy od indeksu, bo idziemy do końca do początku

    for (int indeks = ostatniParzystyIndeks; indeks >= 0; indeks = indeks - 2) {
        cout << indeks << "   ";

        // pobieramy literkę - deklarujemy typ znakowy, czyli char, bo będzie to pojedyncza literka, a nie całe słowo
        char literka = text[indeks];

        cout << literka << endl;
    }

    // jeśli zadanie wymaga, żeby liczyć pierwszą literkę jako nr 1, a nie 0, to wystarczy zmniejszyć indeks o 1, gdy reszta z dzielenia to 0, a nie 1
    // wtedy mamy pozostałe literki
}
