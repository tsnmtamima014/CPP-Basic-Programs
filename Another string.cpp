#include <iostream>
#include <string>
using namespace std;
int main() {
    string mainStr = "Hello World",
    toInsert = "Beautiful ";
    mainStr.insert(6, toInsert);
    cout << mainStr;
    return 0;
}
