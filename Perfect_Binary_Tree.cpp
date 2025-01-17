#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    };
};

// Take input for Level Order

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
int getSize(Node* root) {
    if (root == nullptr)
        return 0;
    
    // Find the size of left and right 
    // subtree.
   

    int left = getSize(root->left);
    int right = getSize(root->right);
    
    // return the size of curr subtree.
    return left+right+1;
}


int get_depth(Node *root){
    if (root == nullptr)
        return 0;
    
    // Find the size of left and right 
    // subtree.
   

    int left =  get_depth(root->left);
    int right =  get_depth(root->right);
    
    // return the size of curr subtree.
    return max(left,right) +1;
}
bool Perfect(Node *root){
    int depth = get_depth(root);
    int totalSize =getSize(root);

    int TotalNode =  pow(2,depth)-1;
    return totalSize ==TotalNode;
}
int main() 
{
    Node * root =input_tree();
     if(Perfect(root))
     cout<<"YES";
     else
     cout<<"NO";
    return 0;
}