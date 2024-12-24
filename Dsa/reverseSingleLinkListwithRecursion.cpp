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
    return 0;
}