#include <bits/stdc++.h>
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
}

void
input_tree()
{
    // create root
    int x;
    cin >> x;
    Node *root;
    if (x == -1)
    {
       root =NULL;
    }
    else
    {
         root = new Node(x);
    }
   

    queue<Node *> myData;
    myData.push(root);

    while(!myData.empty())
    {
        Node *p = myData.front();
        myData.pop();

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
    }
};

void print_level_order(Node *root){
if(root==NULL)
return;

cout<<root->val;
print_level_order(root->left);
print_level_order(root->right)

}

int main()
{

    return 0;
}