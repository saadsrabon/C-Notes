#include <bits/stdc++.h>
using namespace std;

// Doubly Linked List Node
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

// Insert a node at a specific position
bool insertAtAnyPosition(Node*& head, int pos, int val, int& size) {
    // Check for invalid position
    if (pos < 0 || pos > size) {
        return false; // Invalid position
    }

    Node* newNode = new Node(val);

    // Insert at the beginning
    if (pos == 0) {
        newNode->next = head;
        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
    } 
    // Insert at any other position
    else {
        Node* temp = head;
        for (int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
    size++;
    return true;
}

// Print the linked list from left to right and right to left
void printList(Node* head) {
    if (head == NULL) {
        cout << "L -> " << endl;
        cout << "R -> " << endl;
        return;
    }

    Node* temp = head;

    // Print left to right
    cout << "L -> ";
    while (temp != NULL) {
        cout << temp->data << " ";
        if (temp->next == NULL) break; // Save last node for reverse traversal
        temp = temp->next;
    }
    cout << endl;

    // Print right to left
    cout << "R -> ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    int size = 0; // Track the size of the linked list

    int query;
    cin >> query;

    while (query--) {
        int pos, val;
        cin >> pos >> val;

        if (insertAtAnyPosition(head, pos, val, size)==false) {
            cout << "Invalid" << endl;
        } else {
            printList(head);
        }
    }

    return 0;
}
