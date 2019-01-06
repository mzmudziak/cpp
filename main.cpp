#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long n;
    cin >> n;
    long tab[n];
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }
    for (int j = 0; j < n; j++) {
        long sum = 0;
        for (int i = 0; i <= j; i++) {
            sum += tab[i];
        }
        cout << sum << " ";
    }

    return 0;
}



