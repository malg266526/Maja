#include <iostream>
using namespace std;

// wszystkie trzycyfrowe podzielne przez wszystkie cyfry nieparzyste

int main() {
    // wszystkie cyfry nieparzyste to: 1, 3, 5, 7, 9
    // kazda liczba trzycyfrowa jest podzielna przez 1, wiec mozemy pominac 1

    int cyfryNieparzyste[4] = {3, 5, 7, 9};

    // musimy przejsc przez wszystkie cyfry trzycyfrowe
    // więc musimy zrobic petle, ktora bedzie startowac od 100 i bedzie szla do 999 co jeden

    for (int trzycyfrowa = 100; trzycyfrowa <= 999; trzycyfrowa++) {
        // teraz musimy sprawdzic czy liczba jest podzielna przez cyfry nieparzyste

        // jak sprawdzić podzielność?
        // operator reszty z dzielenia: %
        // jeśli reszta z dzielenia jest 0, to liczna jest podzielna, np.
        // if (liczba % 3 == 0) { jest podzielna }

        // mozemy sprawdzać dla kazdej cyfry po kolei i łączyć warunki operatorem AND czyli &&
        // if (liczba % 3 == 0 && liczba % 5 == 0 && liczba % 7 == 0 && liczba % 9 == 0) { podzielna }

        // albo mozemy wrzucic wszystkie do tablicy i przejsc po kolei po wszystkich (opcja trudniejsza)
        // tutaj bedziemy liczyc ile jest cyfr daje podzielnosc
        int licznikNieparzystychPodzielnych = 0;

        // idziemy do 4, bo 4 elementy są w tablicy cyfryNieparzyste
        for (int indeks = 0; indeks < 4; indeks++) {
            // pobieramy po kolei cyfry z tablicy, po jednym indeksie - czyli miejscu w kolejnosci w tablicy
            int nieparzysta = cyfryNieparzyste[indeks];

            if (trzycyfrowa % nieparzysta == 0) {
                // jesli jest podzielna, to zwiekszamy licznik o 1 - liczymy ile jest tych podzielnych
                licznikNieparzystychPodzielnych = licznikNieparzystychPodzielnych + 1;
            }
        }

        // sprawdzamy czy jest niepodzielna przez wszystkie
        // licznik musi byc 4 - bo tyle mamy cyfr nieparzystych w tablicy
        // jesli licznik wskazuje mniej, to znaczy, ze któras cyfra nie dala podzielnosci

        if (licznikNieparzystychPodzielnych == 4) {
            cout << trzycyfrowa << " jest podzielna przez wszystkie niaprzyste " << endl;
        }
    }

    return 0;
}