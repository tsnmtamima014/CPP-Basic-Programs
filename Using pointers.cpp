#include <iostream>
using namespace std;
int main() {
    int r = 2, c = 3;
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}}, trans[3][2];
    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            *(*(trans + j) + i) = *(*(mat + i) + j);
    for(int i = 0; i < c; ++i) {
        for(int j = 0; j < r; ++j) cout << trans[i][j] << " ";
        cout << endl;
    }
    return 0;
}
