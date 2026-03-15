#include <iostream>
using namespace std;
void findPrimes(int L, int R) {
    for (int i = L; i <= R; i++) {
        int count = 0;
        for (int j = 1; j <= i; j++) if (i % j == 0) count++;
        if (count == 2) cout << i << " ";
    }
}
int main() {
    int start, end;
    cout << "Enter range (start end): ";
    cin >> start >> end;
    findPrimes(start, end);
    return 0;
}
