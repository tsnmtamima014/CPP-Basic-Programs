#include <iostream>
int main() {
    long long n;
    int c = 0;
    std::cin >> n;
    if (n == 0) c = 1;
    else while (n != 0) { n /= 10; c++; }
    std::cout << c;
    return 0;
}
