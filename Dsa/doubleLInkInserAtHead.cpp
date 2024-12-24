#include<bits/stdc++.h>
using namespace std;
// Class for creating a Node
class Node {
    public:
    int value;
    Node * next;
    Node *previous;
    Node(int value){
        this->value =value;
        this->next =NULL;
        this->previous = NULL;
    };
};

// Function for print forward
void print_forward(Node *head){
    Node *tmp =head;
    while(tmp!=NULL){
        cout<<tmp->value<<endl;
        tmp =tmp->next;
    }
    

};
void print_backWard(Node *tail){
    Node *tmp =tail;
    while(tmp!=NULL){
        cout<<tmp->value<<endl;
        tmp =tmp->previous;
    }
    

};


// Insert at head
void insert_at_head(Node*&head,int value){
        Node *newNode =new Node(value);

        head->previous =newNode;
        newNode->next =head;
        head=newNode;
}
int main() 
{
    // Create a Double Linked List

    Node *head = new Node(10);  // ||NULL||10||NULL
    Node *a = new Node(20); // ||NULL||20||NULL
    Node *tail = new Node(30);// ||NULL||30||NULL

    // Make connection
    head->next =a;
    a->next =tail;
    a->previous =head;
    tail->previous =a;

    print_forward(head);
  
    insert_at_head(head,50);
    print_forward(head);
    
    return 0;
}