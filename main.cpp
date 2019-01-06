#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long n;
    cin >> n;
    long wynik[n];
    for (int i = 0; i < n; i++) {
        long liczba;
        cin >> liczba;
        if (i == 0) {
            wynik[i] = liczba;
        } else {
            wynik[i] = wynik[i - 1] + liczba;
        }
        cout << wynik[i] << " ";
    }
    return 0;
}



