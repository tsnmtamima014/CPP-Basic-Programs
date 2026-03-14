#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {10, 20, 20, 30, 40, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* last = unique(arr, arr + n);
    int new_n = last - arr;
    for (int i = 0; i < new_n; i++)
        cout << arr[i] << " ";
        return 0;
}
