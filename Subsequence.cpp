#include <iostream>
#include <string>
using namespace std;
int lcs(string X, string Y, int m, int n) {
    if (m == 0 || n == 0) return 0;
    if (X[m-1] == Y[n-1]) return 1 + lcs(X, Y, m-1, n-1);
    return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}
int main() {
    string s1 = "ABCBDAB", s2 = "BDCABA";
    cout << "LCS Length: " << lcs(s1, s2, s1.size(), s2.size());
    return 0;
}
