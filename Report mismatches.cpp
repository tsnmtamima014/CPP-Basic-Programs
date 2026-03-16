
#include <fstream>
#include <iterator>
#include <algorithm>
int main() {
    std::ifstream f1("a.txt"), f2("b.txt");
    bool match = std::equal(std::istreambuf_iterator<char>(f1), {}, std::istreambuf_iterator<char>(f2));
    return match ? 0 : 1;
}
