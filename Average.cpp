#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50},
    n = 5;
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    double avg = sum / n;
    cout << "Average: " << avg;
    return 0;
}
