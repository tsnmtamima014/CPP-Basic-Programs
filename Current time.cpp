
#include <iostream>
#include <ctime>
int main() {
    while(true) {
        time_t n = time(0); char* dt = ctime(&n);
        std::cout << "\r" << dt << std::flush;
    } return 0;
}
