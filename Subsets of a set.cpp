#include <iostream>
#include <vector>
using namespace std;
void findSubsets(vector<int>& v, vector<int> res, int i) {
    if (i == v.size()) { for (int x : res) cout << x << " "; if(res.empty()) cout << "{}" ; cout << endl; return; }
    findSubsets(v, res, i + 1);
    res.push_back(v[i]);
    findSubsets(v, res, i + 1);
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> current;

    cout << "All possible subsets:" << endl;
    findSubsets(nums, current, 0);

    return 0;
}
