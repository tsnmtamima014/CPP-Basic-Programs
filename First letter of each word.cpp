#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string s = "C++ Program Is Easy",
    word;
    stringstream ss(s);
    while (ss >> word) cout <<
        word[0] << " ";
    return 0;
}
