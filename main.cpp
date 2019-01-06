#include <iostream>
#include <math.h>

using namespace std;

long minimum(long a, long b) {
    return a < b ? a : b;
}

long minimum(long a, long b, long c) {
    return minimum(minimum(a, b), c);
}

long maximum(long a, long b) {
    return a > b ? a : b;
}

long maximum(long a, long b, long c) {
    return maximum(maximum(a, b), c);
}


int main() {
    long a, b, c;
    cin >> a >> b >> c;
    long min = minimum(a, b, c);
    long max = maximum(a, b, c);
    long srodek = a +  b + c - min - max;
    cout << min << " ";
    cout << srodek << " ";
    cout << max;
    return 0;
}



