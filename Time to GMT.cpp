#include <iostream>
#include <ctime>
int main() {
    time_t now = time(0);
    tm *gmtm = gmtime(&now);
    std::cout << "GMT Time: " << asctime(gmtm);
    return 0;
}
