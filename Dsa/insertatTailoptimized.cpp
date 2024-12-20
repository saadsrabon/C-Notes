#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node *next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, Node *&tail, int value){
    Node *newNode = new Node(value);
    
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
     
}
void printList (Node *head){
    Node *current =head;
    while(current !=NULL){
        cout<< current->value<<endl;
        current =current->next;
    }
}
int main() 
{
    Node *head = new Node(20);
    Node *tail = head;
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    printList(head);
    return 0;
}