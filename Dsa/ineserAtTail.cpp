// Node bananor jnno class banay nite hbe
// node create korte hbe
// er por ager tail ta k khujhe ber kore tarpor e eitak add korte hbe
//connection banaite hbe


#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node *next;
    Node(int value){
     this->value =value;
     this->next =NULL;
    }
} ;
// insert In tail
void insert_in_tail(Node *&head,int value){
    // created the node
      Node *newNode = new Node(value);

      Node *temp =head;
      while(temp->next !=NULL){
               
            temp =temp->next;
      }

      temp->next =newNode;

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
    Node *head = new Node(10);
    Node *a = new Node (20);
    Node *b = new Node (30);
    Node *c = new Node (40);
    head->next =a;
    a->next =b;
    b->next =c;

  insert_in_tail(head,60);
  insert_in_tail(head,70);
 printList(head);
    return 0;
}