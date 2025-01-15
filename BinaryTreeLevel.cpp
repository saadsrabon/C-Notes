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
 
int main() 
{
   Bnode * root =new Bnode(1);
    root->left=new Bnode(2);
    root->right =new Bnode(3);
    root->right->right =new Bnode(6);
    root->left->left =new Bnode(4);
    root->left->right =new Bnode(5);
    
    return 0;
}