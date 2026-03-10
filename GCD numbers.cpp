#include <iostream>
using namespace std;
int main() {
    int a = 12, b = 18;
    while(b) {a %= b; swap(a,b); }
    cout << "GCD: " << a;
    return 0;
}
