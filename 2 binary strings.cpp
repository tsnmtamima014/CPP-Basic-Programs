#include <iostream>
#include <bitset>
using namespace std;
int main() {
    string b1 = "1010", b2 = "1100";
    unsigned long res = bitset<32>(b1).to_ulong() + bitset<32>(b2).to_ulong();
    string result = bitset<32>(res).to_string();
    cout << result.substr(result.find('1')) << endl;

    return 0;
}
