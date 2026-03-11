
#include <iostream>
int main() {
    int n, s, sum = 0; std::cin >> n; s = n * n;
    while (s > 0) { sum += s % 10; s /= 10; }
    std::cout << (sum == n ? "Neon Number" : "Not Neon Number");
    return 0;
}
