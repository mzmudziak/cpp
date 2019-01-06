#include <iostream>
#include <math.h>
#include<map>

using namespace std;

int main() {
    long n;
    long liczba;
    cin >> n;
    long tab[6];

    // zerujemy tablicę - w kazdym jej elemencie będzie 0 - bo mamy zero jedynek, dwójek...
    for (int j = 1; j <= 6; j++) {
        tab[j] = 0;
    }
    // iterujemy N razy wczytując liczbę i wrzucając ją do odpowiedniego miejsca w tablicy, gdzie indeksem jest ocena a wartością jej ilość
    for (int i = 0; i < n; i++) {
        cin >> liczba;
        tab[liczba] += 1;
    }

    // wypisujemy tablicę
    for (int k = 1; k <= 6; k++) {
        cout << tab[k] << " ";
    }




    return 0;
}



