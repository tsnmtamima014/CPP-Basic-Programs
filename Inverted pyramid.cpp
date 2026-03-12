#include <iostream>
using namespace std;
int main() {
    int n = 5, i = n, j, s;
    while (i--) {
            for (s = 0; s < n - i - 1; s++) cout << " ";
    for (j = 0; j < 2 * i + 1; j++) cout << "*";
        cout << endl;
    }
}
