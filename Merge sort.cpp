#include <iostream>
#include <algorithm>
using namespace std;
void mergeSort(int a[], int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(a, l, m); mergeSort(a, m + 1, r);
    inplace_merge(a + l, a + m + 1, a + r + 1);
}
int main() {
    int a[] = {38, 27, 43, 3, 9, 82, 10}, n = 7;
    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
