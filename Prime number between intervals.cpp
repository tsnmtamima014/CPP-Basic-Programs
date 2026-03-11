#include <iostream>
int main() {
    int s, e, i, j, p;
    std::cin>> s
    >> e;
    for (i = s; i <= e; i++){
            p = (i > 1);
    for (j = 2; j * j <= i; j++) if (i % j == 0) p = 0;
    if (p) std::cout << i << " ";
    }
    return 0;
}
