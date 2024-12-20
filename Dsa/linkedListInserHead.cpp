#include <bits/stdc++.h>
using namespace std;
/* target insert at head
  first ekta node create korte hbe
  value assign korte hbe
  ei jnno amara ekta function use korbo
  refference pointer use korete hbe karon stack
  memory te function theke return er por value delte koredey
  echara main function e j pointer ar function er pointer same na
  tai amra jeta korbo address take pathy dibo
  then oi node e bortoman j head ase take assign korte hbe


 */

class Node
{

public:
    int value;
    Node *next;

    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    };
};
void printList (Node *head){
    Node *current =head;
    while(current !=NULL){
        cout<< current->value<<endl;
        current =current->next;
    }
}

void insertInHead(Node * &head , int val){
        Node *notun = new Node(val);
        notun->next =head;
        head =notun;
}
int main()
{
    Node *head =new Node(10);
    Node *b= new Node(20);
    Node *c= new Node(30);

    // connection
     head->next = b;
     b->next =c;
 insertInHead(head,50);
     printList(head);

    return 0;
}