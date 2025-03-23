#include <iostream>
#include <ostream>
using namespace std;

// 10 najwiekszych liczb pieciocyfrowych podzielnych przez 3 i kończących się cyfrą 5

int main() {
    //  deklarujemy licznik liczb, które szukamy
    int licznikLiczb = 0;

    // potrzebujemy największych liczb, dlatego będziemy szli od największej pięciocyfrowej w dół,
    // do coraz mniejszych, aż się skończą pięciocyfrowe
    // aż znajdziemy ich 10

    int najwiekszaPieciocyfrowa = 99999;
    int najmniejszaPieciocyfrowa = 10000;

    for (int pieciocyfrowa = najwiekszaPieciocyfrowa; pieciocyfrowa >= najmniejszaPieciocyfrowa; pieciocyfrowa--) {
        // sprawdzamy podzielność
        // typ zmiennej, która trzyma wartość prawda lub fałsz to bool
        // bool może mieć wartość true or false
        // np
        // bool czyMamNaImieMaja = true;

        // żeby sprawdzić podzielność, sprawdzamy czy jest ma resztę z dzielenia
        // jeśli nie ma, to znaczy, że jest podzielna przez daną liczbę
        // operator reszty z dzielenia to %
        bool czyPodzielna = pieciocyfrowa % 3 == 0;

        // tak jak do if (warunek) wrzucamy warunek, tak samo możemy wrzucić warunek do zmiennej bool
        // jeśli warunek będzie spełniony, to zmienna bool będzie miała w środku true
        // jeśli warunek nie będzie spełniony, to zmienna bool będzie miała wartość false

        // sprawdzamy czy kończy się na 5
        // jak to zrobić?
        // musimy skorzystać z matematyki
        // gdy mamy np liczbę 12 i podzielimy ją przez 10, to otrzymamy 1,2
        // gdy mamy liczbę 123 i podzielimy ją przez 10, to otrzymamy 12,3
        // za każdym razem reszta z dzielenia jest ostatnią cyfrą

        int resztaZDzielenia = pieciocyfrowa % 10;
        bool czyKonczySieNa5 = resztaZDzielenia == 5;

        // teraz sprawdzamy CZY obydwa warunki są spełnione
        // do sprawdzenia CZY, używamy intrukcji warunkowej IF (warunek)
        // jeśli mamy dwa warunki i OBYDWA MUSZĄ BYĆ SPEŁNIONE, używamy operatora AND czyli &&
        // warunek && warunek

        // jeśli będzie true && true, to warunek będzie spełniony i instrukcje w IF się spełnią
        // jeśli chociaż jedna będzie false, to warunek nie będzie spełniony
        if (czyPodzielna && czyKonczySieNa5) {
            // znaleźliśmy naszą liczbę!
            // zwiększamy licznik znalezionych liczb
            licznikLiczb = licznikLiczb + 1;

            // wyświetlamy znalezioną liczbę
            cout << "Znaleziona pięciocyfrowa: " << pieciocyfrowa << endl;

            // sprawdzamy czy mamy już 10 znalezionych liczb
            if (licznikLiczb == 10) {
                // jeśli mamy, to przerywamy pętle, żeby zakończyła pracę na 10ciu

                return 0;
            }

        }
    }

}