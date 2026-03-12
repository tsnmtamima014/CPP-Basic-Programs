#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
            for (int j = 1; j < 2 * n; j++)
            cout << (j == n-i+1 || j == n+i-1 || i == n ? "*" : " ");
    cout << "\n";
    }

return 0;
}
