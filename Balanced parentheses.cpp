#include <iostream>
#include <stack>
using namespace std;
bool isBalanced(string s, stack<char> st) {
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') st.push(c);
        else if (st.empty() || (c == ')' && st.top() != '(') || (c == '}' && st.top() != '{') || (c == ']' && st.top() != '[')) return false;
        else st.pop();
    }
    return st.empty();
}
int main() {
    string expr = "{()}[]";
    if (isBalanced(expr, stack<char>())) cout << "Balanced";
    else cout << "Not Balanced";
    return 0;
}
