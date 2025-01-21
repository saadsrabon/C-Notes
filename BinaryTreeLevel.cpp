#include<bits/stdc++.h>
using namespace std;
// What we will do  we will print level order in Binary tree
 class Bnode{
      public:
      int val;
      Bnode *left;
      Bnode *right;

      Bnode(int val){
         this->val =val;
         this->left=NULL;
         this->right=NULL;
      }

   };

   // print In level order
   void print_level_order(Bnode *root){
      queue<Bnode*>myDataQueue;
      myDataQueue.push(root);

      while(!myDataQueue.empty()){
         Bnode *temp = myDataQueue.front();
         myDataQueue.pop();
         cout<< temp->val;
         if(temp->left){
            myDataQueue.push(temp->left);
         }
         if(temp->right){
            myDataQueue.push(temp->right);
         }
      }
   }
 void func(){}
int main() 
{
   Bnode * root =new Bnode(1);
    root->left=new Bnode(3);
    root->right =new Bnode(2);
    root->right->right =new Bnode(4);
    root->right->right->left =new Bnode(6);
    root->right->right->right =new Bnode(5);

    
    print_level_order(root);
    return 0;
}