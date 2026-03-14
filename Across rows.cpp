#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[3][3] = {{9, 2, 5}, {4, 8, 1}, {7, 3, 6}};
    for (int i = 0; i < 3; i++)
        sort(arr[i], arr[i] + 3);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) cout << arr[i][j] << " ";
return 0;
}
