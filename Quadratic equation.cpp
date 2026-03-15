#include <iostream>
#include <cmath>
using namespace std;

void findRoots(double a, double b, double c) {
    double d = b * b - 4 * a * c;
    if (d >= 0) {
        cout << "Root 1: " << (-b + sqrt(d)) / (2 * a) << endl;
        cout << "Root 2: " << (-b - sqrt(d)) / (2 * a) << endl;
    } else cout << "Real roots do not exist.";
}
int main() {
    double a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    findRoots(a, b, c);
    return 0;
}
