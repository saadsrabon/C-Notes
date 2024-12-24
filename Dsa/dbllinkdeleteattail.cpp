#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node *next;
    Node *previous;
    Node(int value){
        this->value =value;
        this->next =NULL;
        this->previous =NULL;
    }
};
void print_forward(Node *head){
    Node *tmp =head;
    while(tmp!=NULL){
        cout<<tmp->value<<endl;
        tmp =tmp->next;
   
    }
};
void delete_at_tail(Node *&tail){
    Node *tmp =tail;
    tail =tail->previous;
    tail->next =NULL;
    delete tmp;
}

int main() 
{
    Node *head = new Node(10);  // ||NULL||10||NULL
    Node *a = new Node(20); // ||NULL||20||NULL
    Node *tail = new Node(30);// ||NULL||30||NULL
    a->previous =head;
    head->next =a;
    a->next =tail;
    tail->previous =a;
    print_forward(head);
    delete_at_tail(tail);
    print_forward(head);
    
    return 0;
}