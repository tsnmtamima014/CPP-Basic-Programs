
#include <iostream>
int main() {
    long n, s, d = 1; std::cin >> n; s = n * n;
    for (long t = n; t > 0; t /= 10) d *= 10;
    std::cout << (s % d == n ? "Automorphic" : "Not Automorphic");
    return 0;
}
