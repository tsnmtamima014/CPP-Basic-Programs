
#include <iostream>
using namespace std;
int main() {
    int arr[] = {15, 42, 7, 89, 23}, n = 5;
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
cout << "Max: " << max << ", Min: " << min;
    return 0;
}
