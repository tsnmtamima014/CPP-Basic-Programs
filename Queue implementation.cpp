#include <queue>
#include <iostream>
using namespace std;
int main() {
    queue<int> q;
    q.push(10);
    cout << "Front element: " <<
    q.front() << endl;
    q.pop();
    return 0;
}
