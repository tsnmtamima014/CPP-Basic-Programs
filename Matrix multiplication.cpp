#include <iostream>
#include <vector>
using namespace std;
void multiply(int r1, int c1, int c2, vector<vector<int>> A, vector<vector<int>> B) {
    vector<vector<int>> C(r1, vector<int>(c2, 0));
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++) C[i][j] += A[i][k] * B[k][j];
    for (auto row : C) { for (int x : row) cout << x << " "; cout << endl; }
}
int main() {
    vector<vector<int>> A = {{1, 2}, {3, 4}}, B = {{5, 6}, {7, 8}};
    multiply(2, 2, 2, A, B);
    return 0;
}
