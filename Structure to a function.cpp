#include <iostream>
using namespace std;
struct Complex {
    float real, imag;
};
Complex add(Complex n1, Complex n2) {
    Complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}
int main() {
    Complex n1, n2, sum;
cout << "Enter real and imaginary for 1st: ";
    cin >> n1.real >> n1.imag;
    cout << "Enter real and imaginary for 2nd: ";
    cin >> n2.real >> n2.imag;
sum = add(n1, n2);
cout << "Sum = " << sum.real << " + " << sum.imag << "i" << endl;
    return 0;
}
