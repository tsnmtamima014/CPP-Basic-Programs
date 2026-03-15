#include <iostream>
using namespace std;
int main() {
    int size = 5, front = 0, rear = 0, q[5];
    q[rear] = 10;
    rear = (rear + 1) % size;
    int data = q[front];
    front = (front + 1) % size;
    return 0;
}
