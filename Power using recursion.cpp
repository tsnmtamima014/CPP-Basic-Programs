#include <iostream>
using namespace std;
long power(int base, int exp) {
    return (exp == 0) ? 1 : base * power(base, exp - 1);
}
int main() {
    int b, e;
    cout << "Enter base and exponent: ";
    cin >> b >> e;
    cout << "Result: " << power(b, e);
    return 0;
}
