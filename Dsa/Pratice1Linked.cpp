#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int value;
    Node *next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    };
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
int main() 
{   
    Node *head = NULL;
    Node *tail = NULL;
     int x=0;
    int count =0;
    while (true)
    { 
         cin>>x;
       if(x==-1){
           break;
       }
        
        insertAtTail(head, tail, x);
        count++;

    }
    cout<<count<<endl;
    
    return 0;
}