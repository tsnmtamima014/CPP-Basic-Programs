#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s = "Hello World";
    for (char &c : s)
        c = isupper(c) ? tolower(c) : toupper(c);
    cout << s;
    return 0;
}
