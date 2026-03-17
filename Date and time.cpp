
#include <iostream>
#include <ctime>
int main() {
    time_t now = time(0);
    std::cout << ctime(&now);
    return 0;
}
