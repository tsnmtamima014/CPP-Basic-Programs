
struct Node {
    int data;
    Node *next, *prev;
};
Node* newNode = new Node{10, NULL, NULL};
newNode->next = head;
if(head != NULL) head->prev = newNode;
