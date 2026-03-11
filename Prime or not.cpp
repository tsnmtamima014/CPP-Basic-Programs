#include <iostream>
int main() {
    int n, i, p = 1;
    std::cin >> n;
    for (i = 2; i * i <= n; i++) if
        (n % i == 0) p = 0;
    std::cout << (n > 1 && p ?
                  "Prime" : "Not prime");
                  return 0;
}
