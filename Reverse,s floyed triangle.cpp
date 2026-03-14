#include <iostream>
using namespace std;
int main() {
    int rows, n;
    cout << "Enter rows: ";
    cin >> rows;
    n = rows * (rows + 1) / 2;
    for (int i = rows; i >= 1; i--) {
            for (int j = 1; j <= i; j++)
            cout << n-- << " ";
    cout << endl;
    }
    return 0;
}
