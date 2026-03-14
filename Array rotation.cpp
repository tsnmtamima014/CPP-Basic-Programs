#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5}, n =
    5, k = 2;
    rotate(arr, arr + k, arr + n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
