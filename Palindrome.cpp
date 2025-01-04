#include <bits/stdc++.h>
using namespace std;

// Class for doubly linked list
class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// Function to insert a new node at the tail
void insertAtTail(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}


int main() {
    Node* head = NULL;
    Node* tail = NULL;

    while (true) {
        int x;
        cin >> x;
        if (x == -1) {
            break;
        }
        insertAtTail(head, tail, x);
    }

    Node* temp = head;
    Node* end = tail;
    bool flag = true;

    while (temp != NULL && end != NULL && temp != end && temp->prev != end) {
        if (temp->data != end->data) {
            flag = false;
            break;
        }
        temp = temp->next;
        end = end->prev;
    }

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
