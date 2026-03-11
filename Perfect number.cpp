#include <iostream>
int main() {
    int n, s = 0;
    std::cin >> n;
    for int (i = 1; i < n; i++)
        if (n % i == 0) s += i;
    std::cout << (s == n && n !=
                  0 ? "Perfect Number" : "Not Perfect Number");
                  return 0;
}
