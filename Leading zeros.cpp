#include <iostream>
#include <string>
using namespace std;
int main() {
    string s = "00012345";
    s.erase(0, min(s.find_first_not_of('0'), s.size() - 1));
    cout << "After removing leading zeros: " << s;
    return 0;
}
