#include <iostream>
using namespace std;
long long power(long long a, long long b, long long m) {
    if (b == 0) return 1;
    long long res = power(a, b / 2, m);
    res = (res * res) % m;
    return (b % 2 == 0) ? res : (res * (a % m)) % m;
}
int main() {
    long long base = 2, exp = 10, mod = 1000;
    cout << base << "^" << exp << " % " << mod << " = " << power(base, exp, mod) << endl;

    return 0;
}
