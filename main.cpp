#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long n;
    cin >> n;
    long poprzedniWynik = 0;
    long wynik;
    long liczba;
    for (int i = 0; i < n; i++) {
        cin >> liczba;
        if (i == 0) {
            wynik = liczba;
        } else {
            wynik = poprzedniWynik + liczba;
        }
        poprzedniWynik = wynik;
        cout << wynik << " ";
    }
    return 0;
}



