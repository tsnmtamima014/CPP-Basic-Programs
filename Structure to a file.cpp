#include <fstream>
using namespace std;
struct Student { int id; };

int main() {
    Student s1 = {101}, s2;
    ofstream("test.bin", ios::binary).write((char*)&s1, sizeof(s1));
    ifstream("test.bin", ios::binary).read((char*)&s2, sizeof(s2));
    return 0;
}
