
#include <iostream>
int main() {
    int n, t, s = 0, f; std::cin >> n;
    for(t = n; t > 0; t /= 10) { f = 1; for(int i = 1; i <= t % 10; i++) f *= i; s += f; }
    std::cout << (s == n ? "Strong Number" : "Not Strong Number");
    return 0;
}
