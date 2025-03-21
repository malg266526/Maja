#include <iostream>
using namespace std;

// oblicz sumę z zakresu <500, 2000>, których przedostatnia cyfra to 0

int main() {
    // deklarujemy zmienną liczbową, która będzie trzymać sumę do policzenia
    int suma = 0;

    // gdy idziemy od jednej liczby do drugiej, to użyjemy pętli for
    // start: 500
    // stop: 2000
    // krok: 1

    for (int liczba = 500; liczba <= 2000; liczba++) {
        // cout << liczba << endl;

        // teraz zamienimy liczbę na tekst
        // użyjemy do tego funkcji to_string, która jest w tym samym pakiecie co cin i cout
        // pierwsze dwie linijki pliku pozwalają nam użyć tych funkcji
        string liczba_jako_tekst = to_string(liczba);

        // musimy się dowiedzieć, które miejsce w słowie, to przedostatnie
        // sprawdzamy jak długie jest słowo

        int dlugoscSlowa = liczba_jako_tekst.size();

        // potrzebujemy miejsce przedostatnie, więc odejmujemy jedno miejsce = robimy -1
        // pamiętamy, że iterujemy od 0, a nie od 1, dlatego musimy się cofnąć o jeszcze jedno miejsce

        int miejscePrzedostatnie = dlugoscSlowa - 2;

        // pobieramy ten znak ze słowa

        char przedOstatniZnak = liczba_jako_tekst[miejscePrzedostatnie];

        // sprawdzamy, czy przedOstatniZnak to 0
        // CZY - czyli intrukcja warunkowa IF
        // musimy pamiętać, że znak to nie jest liczba, tylko znak tekstowy, bo przekonwerowaliśmy liczbę na string
        // dlatego porównujemy do znaku '0', a nie do liczby 0

        if (przedOstatniZnak == '0') {
            // jeśli przedostatni znak to 0, to musimy zwiększyć sumę o liczbę
            // tutaj musimy użyć liczby, która jest numerem, a nie tekstem, czyli zmienną "liczba" z pętli
            suma = suma + liczba;
        }
    }

    // wynik wyświetlamy po przejściu całej pętli, czyli będąc już poza pętlą

    cout << suma << endl;
}