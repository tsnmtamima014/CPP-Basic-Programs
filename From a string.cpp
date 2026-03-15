#include <iostream>
#include <sstream>
#include <set>
using namespace std;
int main() {
    string s = "apple banana apple orange", word; stringstream ss(s); set<string> seen;
    while (ss >> word)
        if (seen.insert(word).second)
            cout << word << " ";
    return 0;
}
