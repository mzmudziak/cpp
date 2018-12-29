#include <iostream>
#include <math.h>

using namespace std;



int main() {
    long liczba;
    long min = 0;
    long max = 0;
    for (int i = 0; i < 10; i++) {
        cin >> liczba;
        if (liczba < min) {
            min = liczba;
        }
        if (liczba > max) {
            max = liczba;
        }
    }
    cout << min << endl;
    cout << max << endl;
    return 0;
}


