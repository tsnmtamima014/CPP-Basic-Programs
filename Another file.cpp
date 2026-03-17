
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream src("source.txt", ios::binary);
    ofstream dst("destination.txt", ios::binary);
    dst << src.rdbuf();
    return 0;
}
