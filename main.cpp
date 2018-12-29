#include <iostream>
#include <math.h>

using namespace std;


int main() {
    long n, a;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a % 2 == 0) {
            cout << a;
        } else {
            cout << a * 2;
        }
        cout << " ";
    }
    return 0;
}


