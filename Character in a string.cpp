#include <iostream>
#include <map>
using namespace std;
int main() {
    string s = "programming"; map<char, int> counts;
    for (char c : s) counts[c]++;
    for (auto const& [key, val] : counts)
        cout << key << ": " << val << endl;
    return 0;
}
