#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1 = "Apple", s2 = "Banana";
    if (s1 < s2) cout << s1 << " comes before " << s2;
    else if (s1 > s2) cout << s2 << " comes before " << s1;
    else cout << "Both are same";
    return 0;
}
