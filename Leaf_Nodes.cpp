#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to input the binary tree
Node* input_tree() {
    int x;
    cin >> x;
    Node* root;
    if (x == -1)
        root = NULL;
    else
        root = new Node(x);

    queue<Node*> myData;
    myData.push(root);

    while (!myData.empty()) {
        Node* p = myData.front();
        myData.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left) {
            myData.push(p->left);
        }
        if (p->right) {
            myData.push(p->right);
        }
    }
    return root;
}

// Function to collect all leaf nodes
void collect_leaf_nodes(Node* root, vector<int>& leafNodes) {
    if (root == NULL) return;

    if (!root->left && !root->right) {
        leafNodes.push_back(root->val);
    }
    collect_leaf_nodes(root->left, leafNodes);
    collect_leaf_nodes(root->right, leafNodes);
}

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

int main() {
    Node* root = input_tree();


    vector<int> leafNodes;


    collect_leaf_nodes(root, leafNodes);


    sort(leafNodes.rbegin(), leafNodes.rend());

 
    for (int val : leafNodes) {
        cout << val << " ";
    }
    cout << endl;
    cout<<getSize(root);
    return 0;
}
