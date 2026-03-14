#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "aabbcde";
    for (char c : s)
        if (s.find(c) == s.rfind(c))
    { cout << "First non-repeating: " <<
    c; break; }
    return 0;
}


