#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int source[] = {10, 20, 30, 40, 50}, n = 5, target[5];
    copy(source, source + n, target);
    for (int i = 0; i < n; i++)
        cout << target[i] << " ";
    return 0;
}
