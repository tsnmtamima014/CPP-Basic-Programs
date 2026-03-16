#include <iostream>
#include <vector>
using namespace std;
void insert(vector<int>& table, int size, int key) {
    int index = key % size;
    while (table[index] != -1) index = (index + 1) % size;
    table[index] = key;
}
int main() {
    int size = 10;
    vector<int> hashTable(size, -1);
int keys[] = {12, 22, 42, 5};
    for(int k : keys) insert(hashTable, size, k);
cout << "Hash Table Index: Value" << endl;
    for(int i = 0; i < size; i++) {
        if(hashTable[i] != -1) cout << i << ": " << hashTable[i] << endl;
    }

    return 0;
}
