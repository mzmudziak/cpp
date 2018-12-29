#include <iostream>
#include <math.h>

using namespace std;

long long iloscLizakow(long long n) {
    /**
     * Jezeli N to potega 2, to zwracamy potęgę ( x^5 => 5 )
     * Jezeli N nie jest potega 2, to znajdujemy kolejną potęgę dwójki i powtarzamy krok 1.
     */
    if ((ceil(log2(n)) == floor(log2(n)))) {
        // zwracamy potege 2
        return static_cast<long long int>(ceil(log2(n)));
    } else {
        // N nie jest potęgą dwójki
        // Znajdź kolejną liczbę która jest potęgą dwójki
        return static_cast<long long int>(ceil(log(n) / log(2)));
    }
}

int main() {
    long long iloscBulek;
    cin >> iloscBulek;
    cout << iloscLizakow(iloscBulek);
    return 0;
}


