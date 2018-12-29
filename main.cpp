#include <iostream>
#include <math.h>

using namespace std;

long ileSkokow(long x, long s) {
    /**
     * Skaczemy pierwszy raz o S
     * Sprawdzamy, czy przekroczylismy X (Konik przeskoczył drogę)
     * Jeśli tak - zwracamy ilośc skoków
     * Jeśli nie, to zmniejszamy długość skoku (konik się męczy) - floor(s / 2)
     *
     */

    long przeskoczonyDystans = 0;
    long iloscSkokow = 0;
    long skok = s;
    przeskoczonyDystans = przeskoczonyDystans + s; // konik skacze
    iloscSkokow = iloscSkokow + 1;
    while (przeskoczonyDystans < x) { // dopóki konik nie przeskoczył drogi
        przeskoczonyDystans = przeskoczonyDystans + skok; // skocz o S
        iloscSkokow = iloscSkokow + 1; // zwieksz liczbę skoków o 1
        if (skok != 1) {
            skok = floor(s / 2); // konik się zmęczył, więc teraz będzie skakał o połowę krócej
        }
    }
    return iloscSkokow;
}


int main() {
    long x, s;
    cin >> x;
    cin >> s;
    cout << ileSkokow(x, s);
    return 0;
}


