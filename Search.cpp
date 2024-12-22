#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int value;
    Node *next;
    Node(int value){
        this->value=value;
        this->next =NULL;
    };

};

// Insert at tail
void insert_at_tail(Node * &head ,Node *&tail ,int value){
    Node *new_node =new Node(value);
    if(head ==NULL){
        head =new_node;
        tail =new_node;
        return;
    };
    tail->next= new_node;
    tail =tail->next;
}
 int search_the_value(Node *head,int value_to_search){
    Node *current =head;
    int indx =0;

    while (current != NULL) {
        if (current->value == value_to_search) {
            return indx; 
        }
       
        current = current->next;
            indx++;
       
    }
    return -1; 
       
    }
     
 
int main() 
{
     
     int x;
     cin>> x;
     
     while(x--){
     Node *head =NULL;
     Node *tail =NULL;
      while(true){
          int y;
          cin>>y;
          if(y==-1){
            break;
          }
          insert_at_tail(head,tail,y);
     };
       int value_to_search;
       cin>>value_to_search;
      cout<<search_the_value(head,value_to_search)<<endl;
 
     }
     
     
    return 0;
}