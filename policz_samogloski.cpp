#include <iostream>
using namespace std;

// policz samogłoski w tekście

int main() {
    // najpierw zapiszemy sobie wszystkie samogłoski w tablicy
    // samogłoski to znaki, więc będzie to tablica typu char

    char samogloski[] = {'a', 'A', 'e', 'E', 'o', 'O', 'i', 'I', 'u', 'U', 'y', 'Y'};

    // wczytujemy tekst od użytkownika
    // tekst to słowo, czyli typ string

    string tekst;
    cin >> tekst;

    // żeby przejść po całym słowie, musimy iść po kolejnych miejscach w słowie, jak po wagonikach w pociągu
    // od zera, do końca słowa, czyli do długości słowa (ilość liter)

    int dlugoscSlowa = tekst.size();

    // deklarujemy sobie licznik, który będziemy zwiększać po znalezeniu samogloski
    int licznik = 0;

    // mamy start: 0
    // mamy koniec: dlugosc slowa
    // mamy krok: 1, bo idziemy co literkę do przodu
    // więc robimy pętle for (start, stop, krok)

    for (int miejsceWSlowie = 0; miejsceWSlowie < dlugoscSlowa; miejsceWSlowie++) {
        // pobieramy literkę
        char literka = tekst[miejsceWSlowie];

        // żeby sprawdzić czy literka jest samogłoską, przechodzimy przez tablicę samogłosek
        // po kolei, po jednej samogłosce, tak jak po literce w słowie
        // start: 0, stop: ile jest samogłosek w tablicy, krok: 1, bo idziemy po jednej, po kolei

        for (int indeks = 0; indeks < 12; indeks++) {
            // pobieramy samogłoskę
            char samogloska = samogloski[indeks];

            // sprawdzamy czy literka jest samogłoską
            // gdy sprawdzamy CZY jakis warunek zachodzi, używamy instrukcji warunkowej IF

            if (literka == samogloska) {
                // zwiększamy licznik
                licznik = licznik + 1;
            }
        }
    }

    // jak przejdziemy przez pętle, to poza pętlą wyświetlamy wynik
    cout << licznik << endl;

}