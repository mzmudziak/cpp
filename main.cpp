#include <iostream>
#include <math.h>
#include<map>

using namespace std;

bool czyLiczbaPierwsza(long l) {
    for (int i = 0; i < sqrt(l); i++) {

        if (i == 0 || i == 1) {
            continue;
        }
        if (l % i != 0) {
            continue;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    long n, l;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> l;
        cout << czyLiczbaPierwsza(l) << " ";
    }
    return 0;
}



