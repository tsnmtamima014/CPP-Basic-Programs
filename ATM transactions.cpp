#include <iostream>
using namespace std;
void atm(int choice, int &bal, int amt) {
    if (choice == 1) cout << "Balance: " << bal << endl;
    else if (choice == 2) bal += amt;
    else if (choice == 3 && bal >= amt) bal -= amt;
    else cout << "Invalid/Insufficient" << endl;
}
int main() {
    int balance = 5000;
    atm(1, balance, 0);
    atm(2, balance, 1000);
    atm(3, balance, 500);
    return 0;
}
