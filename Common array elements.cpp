#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int a[] = {1, 2, 3, 4}, b[] = {2, 4, 6, 8};
    vector<int> res(4);
    auto it = set_intersection(a, a + 4,
    b, b + 4, res.begin());
    for (auto i = res.begin(); i !=
    it; ++i)
    cout << *i << " ";
    return 0;
}
