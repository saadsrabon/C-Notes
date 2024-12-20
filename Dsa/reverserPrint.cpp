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

void print_linked_list(Node *head){
    // base
    if(head == NULL){
        return;
    } 
    print_linked_list(head->next);
    cout<<head->value<<endl;
}
int main() 
{
    Node *head = NULL;
    Node *tail = NULL;

        int x;
    while (true)
    {
        cin>>x;
        if(x==-1){
            break;
        }
        insertAtTail(head, tail, x);
    }
    
    print_linked_list(head);
    
    return 0;
}