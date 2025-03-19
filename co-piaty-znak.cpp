#include <iostream>
using namespace std;

// wypisz co piąty znak z podanego tekstu

int main() {
    cout << "Wpisz tekst" << endl;

    // deklarujemy zmienną tesktową, do której wczytamy co użytkownik podał
    string text;

    cin >> text;

    // najpierw musimy sprawdzić czy tekst ma conajmniej 5 znaków

    // sprawdzamy długość słowa
    int dlugosc = text.size();

    // jeśli mamy pytanie CZY, to używamy instrukcji warunkowej IF
    if (dlugosc < 5) {
        cout << "tekst za krotki" << endl;

        // nie chcemy iść do kolejnego kroku, chcemy żeby program zakończył się teraz, więc dajemy return
        return 0;
        // bez tego returna, program poszedłby dalej
    }

    // będziemy szli od 5 znaku, do końca, co 5
    // jeśli mamy miejsce startu: indeks 5,
    // miejsce stopu: długość słowa
    // krok: 5 (co piąty znak)
    // to możemy użyć pętli for (start, stop, krok)

    for (int indeks = 5; indeks < dlugosc; indeks = indeks + 5) {
        // odczytanie znaku to sprawdzenie co jest w słowie na danym indeksie, czyli na danym miejscu (jak w pociągu numer konkretnego wagonika)
        // słowo[indeks]

        cout << text[indeks] << endl;
    }

    return 0;
}