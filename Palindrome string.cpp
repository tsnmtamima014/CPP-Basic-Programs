#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string s = "madam", r = s;
    reverse(r.begin(), r.end());
    cout << (s == r ? "Palindrome" :
             "Not Palindrome");
             return 0;
}
