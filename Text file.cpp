
#include <fstream>
using namespace std;

int main() {
    ifstream src("source.txt");
    ofstream dst("destination.txt", ios::app);
    dst << src.rdbuf();
    return 0;
}
