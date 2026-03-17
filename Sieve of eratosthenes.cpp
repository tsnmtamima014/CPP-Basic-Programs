#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n = 100; vector<bool> p(n + 1, 1);
    for (int i = 2; i * i <= n; i++) if (p[i]) for (int j = i * i; j <= n; j += i) p[j] = 0;
    for (int i = 2; i <= n; i++) if (p[i]) cout << i << " ";
    return 0;
}
