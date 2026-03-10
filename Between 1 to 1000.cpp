#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 1000; i++) {
            int sum = 0, temp = i;
    while (temp > 0) {
            int d = temp % 10;
    sum += d * d * d;
    temp /= 10;
    }
    if (sum == i) cout << i << " ";
    }
    return 0;
}
