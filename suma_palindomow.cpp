#include <iostream>
using namespace std;

// oblicz sumę z trzycyfrowych palindromów

int main() {
    // deklarujemy zmienną liczbową, która będzie trzymać sumę do policzenia
    int suma = 0;

    // jeśli mamy sprawdzić wszystkie liczby trzycyfrowe, to wiemy, że będziemy patrzeć na zakres liczb od 100 do 999
    // zakres liczb nam sugeruję pętle for - mamy start, mamy stop i mamy krok

    for (int trzycyfrowa = 100; trzycyfrowa <= 999; trzycyfrowa++) {
        // palindrom oznacza, że odczytując coś od tyłu, będzie takie samo, jak od przodu
        // w przypadku liczb trzycyfrowych, środek zawsze jest taki sam, więc musimy sprawdzić czy pierwsza i ostatnia cyfra będzie taka sama

        // żeby porównać pierwszą i ostatnią cyfrę, możemy użyć dwóch sposobów:
        // 1. zamienić liczbę na stringa i pobrać znak z pierwszego miejsce, czyli indeksu [0] i ostatniego czyli indeksu dlugosc slowa - 1 (tak jak w zadaniu z sumą liczb z zakresu)
        // 2. skorzystać z dzielenia
        // wykorzystamy tutaj sposób 2, bo 1 jest użyty w innym zadaniu

        // wiemy, że nasza liczba jest trzycyfrowa, więc wiemy, że:
        // a) jeśli podzielimy liczbę trzycyfrową przez 100 i zaokrąglimy do liczb całkowitych, to dostaniemy pierwszą cyfrę
        // b) jeśli będziemy mieć resztę z dzielenia liczby trzycyfrowej przez 10, to dostaniemy ostatnią cyfrę

        int pierwszaCyfra = trzycyfrowa / 100;
        int trzeciaCyfra = trzycyfrowa % 10;

        // sprawdzamy czy są takie same
        // CZY czyli instrukcja warunkowa IF

        if ( pierwszaCyfra == trzeciaCyfra) {
            // zwiększamy sumę o liczbę
            cout << trzycyfrowa << endl;

            suma = suma + trzycyfrowa;
        }
    }

    // wynik wyświetlamy po przejściu całej pętli, czyli będąc już poza pętlą
    cout << "suma: " << suma << endl;
}