#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack<int> &st, int x) {
    if (st.empty()) { st.push(x); return; }
    int temp = st.top(); st.pop();
    insertAtBottom(st, x);
    st.push(temp);
}void reverseStack(stack<int> &st) {
    if (st.empty()) return;
    int x = st.top(); st.pop();
    reverseStack(st);
    insertAtBottom(st, x);
}
int main() {
    stack<int> s;
    s.push(1); s.push(2); s.push(3);
    reverseStack(s);
    while(!s.empty()) { cout << s.top() << " "; s.pop(); }
    return 0;
}
