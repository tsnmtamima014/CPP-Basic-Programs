#include <iostream>
using namespace std;
void hanoi(int n, char s, char d, char a) {
    if (n == 0) return;
    hanoi(n - 1, s, a, d);
    cout << "Move disk " << n << " from " << s << " to " << d << endl;
    hanoi(n - 1, a, d, s);
}
int main() {
    int n = 3;
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
