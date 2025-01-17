#include<bits/stdc++.h>
using namespace std;
// Node class creation

class Node {
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val =val;
        this->left =NULL;
        this->right =NULL;
    }

};

Node * input_tree()
{
    // First we need to create the root first
    int x;
    cin >> x;
    Node *root;
    if (x == -1)
        root = NULL;
    else
        root = new Node(x);
    // Create a queue and push root there
    queue<Node *> myData;
    myData.push(root);

    // Ber kore ante heb]
    while (!myData.empty())
    {
        Node *p = myData.front();
        myData.pop();
        // For this dara i need to take two input
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
        {
            myLeft = new Node(l);
        }
        if (r == -1)
            myRight = NULL;
        else
        {
            myRight = new Node(r);
        }
        p->left = myLeft;
        p->right = myRight;

        if (p->left)
        {
            myData.push(p->left);
        }
        if (p->right)
        {
            myData.push(p->right);
        }
    };
    return root;
};

// void sum_without_leaf(Node *root){
//       queue<Node*>myDataQueue;
//       myDataQueue.push(root);
//       int sum =0;
//       while(!myDataQueue.empty()){
//          Node *temp = myDataQueue.front();
//          myDataQueue.pop();
//         //  cout<< temp->val <<" ";
//          if(temp->left && temp->right){
//             sum += temp->val;
//          }
//          if(temp->left){
//             myDataQueue.push(temp->left);
//          }
//          if(temp->right){
//             myDataQueue.push(temp->right);
//          }
//       }
      

//       cout<<sum;
   
//    }
// Check and Print the sum

 int sum_without_leaf(Node *root){
  
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL){
        return 0;
    }
   
    return root->val + sum_without_leaf(root->left) + sum_without_leaf(root->right);
  

    

 }

   
int main() 

// Take input of binary tree as level order

{
    Node *root = input_tree();
    cout<<sum_without_leaf(root);
    return 0;
}