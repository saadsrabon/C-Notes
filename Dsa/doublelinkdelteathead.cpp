#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    };
} ;

void delete_at_head(Node * &head,Node * &tail){
    Node * tmp =head;
    head =head->next;
    head->prev =NULL;
    delete tmp;
};
void print_Link_list(Node *head){
          Node * tmp = head;
          while(tmp!=NULL){
            cout<<tmp->val<<endl;
            tmp= tmp->next;
          };
}
int main() 
{
    Node *head =new Node(10);
    Node *a =new Node(20);
    Node*tail =new Node(30);
    head->next=a;
    a->prev =head;
    a->next=tail;
    tail->prev=a;
    delete_at_head(head,tail);
    print_Link_list(head);
    return 0;
}