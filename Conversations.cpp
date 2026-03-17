#include <iostream>
#include <string>
#include <bitset>
using namespace std;
int main() {
    char c = 65; long l = stol("123456789");
    cout << oct << 255 << " " << hex << 255 << endl;
    string b_str = (true ? "true" : "false");
    string bin = bitset<8>(10).to_string();
cout << "Char: " << c << " | Long: " << l << " | Binary: " << bin;
    return 0;
}
