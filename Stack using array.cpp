#include <iostream>
using namespace std;

int stack[100], top = -1;

void push(int x) { stack[++top] = x; }
void pop() { if(top >= 0) top--; }
int peek() { return stack[top]; }

int main() {
    push(10); push(20);
    cout << "Top element: " << peek() << endl;
    pop();
    cout << "After pop, Top: " << peek();
    return 0;
}
