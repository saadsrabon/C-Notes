#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node * next;
    Node(int value){
    this->val =value;
    this->next=NULL;
    };
};

// Insert at tail 

void insert_at_tail(Node*&head ,Node * &tail,int value){
    Node *newNode =new Node(value);
    Node *temp =head;
    if(head ==NULL){
        head =newNode;
        tail =newNode;
        return;
    }
    while(temp!=NULL){
       

        temp=temp->next;
    }
    tail->next =newNode;
    tail=newNode;

};
void print_link_list(Node * head){
         Node *current =head;
         while(current!=NULL){
            cout<<current->val<<endl;
            current=current->next;
         }
}
// Function to use recursively reverse

void reverse_linked_list(Node *&head,Node *& tail , Node *temp){

    if(temp->next==NULL){
        head =temp;
        return;
    }
    reverse_linked_list(head,tail,temp->next);
    temp->next->next =temp;
    temp->next =NULL;
    tail =temp;
};
int main() 
//  i will create a single linked list and reverse it using recursion
         

{
    Node *head = NULL;
    Node *tail =NULL;
     int x;
    while(true){
        cin>>x;
        if(x==-1){
            break;
        }
        insert_at_tail(head,tail,x);
    
        
    }
        print_link_list(head);
        reverse_linked_list(head,tail,head);
        print_link_list(head);
    return 0;
}