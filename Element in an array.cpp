#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5}, val = 2, n = 7;
    int* new_end = remove(arr, arr + n, val);
    for (int* p = arr; p != new_end; ++p)
        cout << *p << " ";
    return 0;
}
