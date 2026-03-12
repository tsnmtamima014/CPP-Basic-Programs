#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string s = "C++ is fun to learn";
    stringstream ss(s);
    string word;
    int count = 0;
    while (ss >> word) count++;
    cout << "Words: " << count;
    return 0;
}
