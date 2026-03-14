#include <iostream>
#include <set>
using namespace std;
int main() {
    string s = "The quick brown fox jumps over the lazy dog";
    set<char> letters;
    for (char c : s) if (isalpha(c)) letters.insert(tolower(c));
    cout << (letters.size() == 26 ? "Pangram" : "Not Pangram");
    return 0;
}
