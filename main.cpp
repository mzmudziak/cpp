#include <iostream>
#include <math.h>

using namespace std;

long maximum(long a, long b) {
    return a > b ? a : b;
}


int main() {
    long a,b,c;
    cin >> a >> b >> c;
    cout << maximum(maximum(a, b), c);
    return 0;
}



