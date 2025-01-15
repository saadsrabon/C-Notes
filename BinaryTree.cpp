// Binary tree is a non linear data type
// Mostly we follow recursion to solve the binary type problem
//there are three types of data lilke preorder , in order ,postorder

// Lets implement pre order

// Here we will print a manually created binary tree
// Here we are working on Preorder // inorder // postorder.
#include<bits/stdc++.h>
using namespace std;
// Binary Tree Class added
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
 void print_binary_tree(Bnode * root){
   if(root ==NULL){
      return;
   }
   cout<<root->val;
   print_binary_tree(root->left);
   print_binary_tree(root->right);
 }
int main() 
{
    Bnode * root =new Bnode(1);
    root->left=new Bnode(2);
    root->right =new Bnode(3);
    root->right->right =new Bnode(6);
    root->left->left =new Bnode(4);
    root->left->right =new Bnode(5);
    print_binary_tree(root);
    return 0;
}