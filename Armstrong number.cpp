#include <iostream>
using namespace std;
int main() {
    int n, s = 0, t;
    cin >> n; t = n;
    while (n > 0) {
        s += (n % 10) * (n % 10) * (n % 10);
        n /= 10;
    }
    if (s == t) cout << "Armstrong";
    else cout << "Not Armstrong";
    return 0;
}
