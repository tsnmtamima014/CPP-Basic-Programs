#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
Node* copyList(Node* head) {
    if (!head) return nullptr;
    Node* newNode = new Node(head->data);
    newNode->next = copyList(head->next);
    return newNode;
}
void printList(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}
int main() {

    Node* original = new Node(1);
    original->next = new Node(2);
    original->next->next = new Node(3);
cout << "Original List: ";
    printList(original);
    Node* copied = copyList(original);
cout << "Copied List:   ";
    printList(copied);

    return 0;
}
