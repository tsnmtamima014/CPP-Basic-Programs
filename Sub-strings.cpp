#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string s = "C++ is fun", word;
    stringstream ss(s);
    while (ss >> word)
        cout << word << endl;
    return 0;
}
