#include <iostream>
using namespace std;
bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return n > 1;
}
void checkSumOfTwoPrimes(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            cout << n << " = " << i << " + " << n - i << endl;
            return;
        }
    }
    cout << "Cannot be expressed as sum of two primes.";
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkSumOfTwoPrimes(num);
    return 0;
}
