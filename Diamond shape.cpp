
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for (int i = 1; i < 2 * n; i++) {
        int r = (i <= n) ? i : 2 * n - i;
        for (int j = 1; j < 2 * n; j++)
            cout << (j == n-r+1 || j == n+r-1 ? "*" : " ");
        cout << "\n";
    }
}
