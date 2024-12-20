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
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->value<<endl;
        temp = temp->next;
    }
    
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