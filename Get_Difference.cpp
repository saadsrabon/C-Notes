// Take singly list as Input and return the difference of the max and min number.

/*
Steps:
1. Create a singly list.
2. Take input from the user.
3. Find the max and min number.
4. Return the difference of the max and min number.
*/

#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node (int data) {
        this->data = data;
        this->next = NULL;
    }
};
// Print Function

void insert(Node* &head, Node * &tail, int data) {
    Node *new_node = new Node(data);
    if (head == NULL) {
        head = new_node;
        tail = new_node;
        return;
    }

 
    tail->next = new_node;
    tail = new_node;



}
void get_difference(Node *head){
    Node *tmp = head;
    int Max =INT_MIN;
    int Min = INT_MAX;
    while(tmp!=NULL){
         
         if(tmp->data>Max){
            Max =tmp->data;
         };
         if(tmp->data<Min){
            Min = tmp->data;
         }
         tmp =tmp->next;
        
    }

    cout<< Max-Min<<endl;
}
int main() 
{   
    Node *head = NULL;
    Node *tail = NULL;
    // Take input from the user.
      int data;
    while(true){
      
        cin >> data;
        if (data == -1) {
            break;
        }
        insert(head, tail, data);
    }

    get_difference(head);
    return 0;
}