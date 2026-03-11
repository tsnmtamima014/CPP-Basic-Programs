#include <iostream>
int main() {
    int n, r = 0, t;
    std::cin >> n, t = n;
    while (t > 0) {r = r * 10 + t % 10;
    t /= 10;
    }
std::cout << (n == r ?
              "Palindrome" : "Not palindrome");
return 0;
}
