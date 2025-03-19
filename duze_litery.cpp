#include <iostream>
#include <ostream>
using namespace std;

int main() {
    cout << "Wpisz tekst" << endl;

    // deklarujemy zmienną tesktową, do której wczytamy co użytkownik podał
    string text;

    cin >> text;

    // żeby sprawdzić litery, musimy po nich przejść po kolei, jedna po drugiej
    // więc użyjemy pętli
    // pętla, która idzie po kolei, to FOR
    // for(start, stop, krok)

    // będziemy iterować po indeksach - czyli numerach miejsc liter, od 0, do tylu, ile jest liter w słowie

    int ileLiter = text.size();

    // zmienna, która nam będzie liczyć ile jest dużych liter - jak będzie 0, to wyświetlimy BRAK
    int licznikDuzychLiter = 0;

    for (int i = 0; i < ileLiter; i++){
        // jak pobrać literę ze słowa?
        // bierzemy znak w słowie, który stoi na indeksie i
        // jedna litera to już nie słowo, tylko znak, dlatego deklarujemy jako char i używamy pojedynczych kresek, a nie cudzysłowu

        char litera = text[i];

        // jak sprawdzić czy jest duża?
        // musi się mieścić w alfabecie, pomiędzy A i Z, więc sprawdzamy czy większa od A i miejsza od Z
        // jeśli chcemy połączyć dwa warunki (albo więcej), to używamy operatora AND - &&

        if (litera >= 'A' && litera <= 'Z') {
            // jeśli jest duża, to zwiększamy nasz licznik dużych liter
            licznikDuzychLiter = licznikDuzychLiter + 1;
        }
    }

    // po pętli, czyli po przejściu wszystkich liter, sprawdzamy ile jest dużych

    if (licznikDuzychLiter == 0) {
        cout << "BRAK DUZYCH LITER";
    }

    if (licznikDuzychLiter > 0) {
        cout << "Znalazlam " << licznikDuzychLiter << " duzych liter";
    }

    return 0;
}