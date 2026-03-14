#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a[] = {1, 3, 5}, b[] = {2, 4, 6}, res[6];
    merge(a, a + 3, b, b + 3, res);
    for (int i = 0; i < 6; i++)
        cout << res[i] << " ";
    return 0;
}

