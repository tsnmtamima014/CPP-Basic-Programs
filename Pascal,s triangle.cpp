
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for (int i = 0, v = 1; i < n; i++, v = 1) {
        for (int s = 1; s < n - i; s++) cout << " ";
        for (int j = 0; j <= i; j++) cout << v << " ", v = v * (i - j) / (j + 1);
        cout << "\n";
    }
}
