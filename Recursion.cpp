#include <iostream>
using namespace std;
void rev(string s, int n) {
    if (n >= 0) { cout << s[n];
    rev(s, n - 1); }
}
int main() {
    string s = "Hello";
    rev(s, s.length() - 1);
    return 0;
}
