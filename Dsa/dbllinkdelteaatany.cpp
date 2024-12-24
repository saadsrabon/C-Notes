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
void delete_at_any(Node *&head,Node *&tail,int value){
    Node *tmp =head;
    while(tmp!=NULL){
        if(tmp->value ==value){
            if(tmp==head){
                head =head->next;
                head->previous =NULL;
                delete tmp;
                return;
            }
            if(tmp==tail){
                tail =tail->previous;
                tail->next =NULL;
                delete tmp;
                return;
            }
            tmp->previous->next =tmp->next;
            tmp->next->previous =tmp->previous;
            delete tmp;
            return;
        }
        tmp =tmp->next;
    }
};
int main() 
{
    
    return 0;
}