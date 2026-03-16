#include <cstdio>
#include <iostream>
int main() {
    FILE* temp = tmpfile();
    if (temp) std::fputs("Hello Temporary World!", temp);
    return 0;
}
