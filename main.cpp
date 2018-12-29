#include <iostream>
#include <math.h>

using namespace std;


int main() {
    long a, b, max = -1000000;
    char znak;
    bool czyWypisacNIE = false;
    cin >> a;
    cin >> b;
    long dodane = a + b;
    long odjete = a - b;
    long pomnozone = a * b;

    if (dodane == odjete) {
        czyWypisacNIE = true;
    }
    if (dodane == pomnozone) {
        czyWypisacNIE = true;
    }
    if (odjete == pomnozone) {
        czyWypisacNIE = true;
    }

    if (czyWypisacNIE) {
        cout << "NIE";
        return 0;
    }
    if (dodane > max) {
        max = dodane;
        znak = '+';
    }
    if (odjete > max) {
        max = odjete;
        znak = '-';
    }
    if (pomnozone > max) {
        max = pomnozone;
        znak = '*';
    }
    if (a < 0) {
        cout << "(";
    }
    cout << a;
    if (a < 0) {
        cout << ")";
    }
    cout << znak;
    if (b < 0) {
        cout << "(";
    }
    cout << b;
    if (b < 0) {
        cout << ")";
    }
    cout << '=' << max;

    return 0;
}


