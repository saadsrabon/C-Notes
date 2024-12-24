#include<bits/stdc++.h>
using namespace std;
// Class for create node
class Node {
    public:
    int value;
    Node * next;
    Node * prev;
    Node(int value){
        this->value=value;
        this->next =NULL;
        this->prev=NULL;
    };
};

// Function to insert at any position
void insert_at_any(Node * &head,Node * &tail,int value ,int idx)
{

      Node * newNode = new Node(value);
      Node *tmp =head;
            
      for (int i = 1; i < idx; i++)
      {
        tmp =tmp->next;
      }
  
    //   amra oi index e aisha porsi
    newNode->next =tmp->next;
    tmp->next->prev =newNode;
    tmp->next =newNode;
    newNode->prev =tmp;

}
void print_Link_list(Node *head){
          Node * tmp = head;
          while(tmp!=NULL){
            cout<<tmp->value<<endl;
            tmp= tmp->next;
          };
}
int main() 
{

    // Creating head
    Node *head =new Node(10);
    Node *a =new Node(20);
    Node*tail =new Node(30);
    head->next=a;
    a->prev =head;
    a->next=tail;
    tail->prev=a;


     insert_at_any(head,tail,50,1);
    

     print_Link_list(head);
    
    return 0;
}