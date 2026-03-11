#include <iostream>
#include <algorithm>
int main() {
    int n, i; std::cin >> n; int a[n]; for(i=0; i<n; i++) std::cin >> a[i];
    std::sort(a, a + n); std::cout << a[n - 2];
    return 0;
}
