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
}
int main()
{
    Node * root =input_tree();


    
    return 0;
}