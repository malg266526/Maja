/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    std::cout<<"Podaj liczbe calkowita, wieksza od 1000 \n";
    
    int r;
    
    // cin >> r;
    
    // przypisanie wartosci
    
    int a = 1005;
    
    // romb to instrukcja warunkowa 
    // sprawdzamy, czy podany warunek jest spelniony
    
    // jeśli T - liczba nieparzysta, idziemy dalej
    // jeśli N - parzysta - pomniejszamy "a" o 1
    
    
    // taki byłby dosłowny zapis schematu:  
    /*
        if (a % 2 != 0) {} 
        else {
            a = a - 1;
        }
    */
    
    // ale lepiej ładniej zrobić to tak: 
    
    if (a % 2 == 0) {
        a = a - 1;
    }
    
    // idziemy dalej
    
    // znowu instrukcja warunkowa, ale widzimy, że jest zapętlona - strzałki tworzą zamknięty krąg
    // więc bierzemy instrukcję warunkową WHILE, która leci w kółko, DOPÓKI warunek jest spełniony, jeśli nie, to mamy STOP
    
    // pętla się wykonuje, gdy warunek nie jest spełniony - strzałka N
    // więc do warunku wrzucamy odwrotność spełnienia - a >= liczbie
    
    while(a >= 500) {
        
        // znowy warunek
        if ( a % 10 + (a / 100) % 10 == 10 ) {
            
            // te trzy komentarze wypisuję dane z działania po kolei, po to, żeby wykminić co robi program
            // odkomentuj i po liczbach poznasz co się dzieje
            // cout << "\nliczba a: " << a << "\n";
            // cout << "a % 10 = " << a % 10 << "\n";
            // cout << "(a / 100) % 10 = " << (a / 100) % 10 << "\n\n";
            
            // strzałka T 
            cout << "a: " << a << "\n";
            
            // po wypisaniu a, strzałka idzie dalej, do zmiany wartości
            a = a - 2;
            
        } else {
            // strzałka N
            a = a - 2;
        }
    }
    
    return 0;
}
