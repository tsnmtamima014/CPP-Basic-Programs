#include <iostream>
int main() {
    int h; std::cout << "Enter hours: "; std::cin >> h;
    std::cout << h << " hours = " << h * 60 << " minutes\n";
    std::cout << h << " hours = " << h * 3600 << " seconds\n";
    return 0;
}
