#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree(){
  int val;
  
  cin >> val;
  
  Node *root ;
  
  if(val == -1){
    return NULL;
  }else{
    root = new Node(val);
  }  
   
   queue<Node*> q;
  
  if(root != NULL){
   q.push(root);
  } 
   
   
  while(!q.empty()){
    Node *temp = q.front();
    q.pop();
    
    int l, r;
    cin >> l >> r;
    
    Node *myLeft;
    Node *myRight;
    
    if( l ==-1){
      myLeft = NULL;
    }else{
      myLeft = new Node(l);
    }
    
    if( r ==-1){
      myRight = NULL;
    }else{
      myRight = new Node(r);
    }
    
    
    temp->left = myLeft;
    temp->right = myRight;
    
    
    if(temp->left !=NULL){
      q.push(temp->left);
    }
    
    if(temp->right != NULL){
      q.push(temp->right);
    }
    
  }
  
  return root;
  
}


void printLBoundary(Node *root, vector<int> &leftSideVec) {
    if (root == NULL) {
        return;
    }
    if (!root->left && !root->right) {
        leftSideVec.push_back(root->val);
        return;
    }
    leftSideVec.push_back(root->val);
    
    if (root->left){
       printLBoundary(root->left, leftSideVec);
    }
    else if (root->right) {
      printLBoundary(root->right, leftSideVec);
    }
}

void printRBoundary(Node *root, vector<int> &rightSideVec) {
    if (root == NULL) {
      return;
    }
    if (!root->left && !root->right) {
        rightSideVec.push_back(root->val);
        return;
    }
    rightSideVec.push_back(root->val);
    if (root->right){
       printRBoundary(root->right, rightSideVec);
    }
    else if (root->left){
       printRBoundary(root->left, rightSideVec);
    }
}


void printOuterTree(Node *root) {
    if (root == NULL) {
        return;  // Tree is empty, no output.
    }

    if (!root->left && !root->right) {
        cout << root->val << endl;  // Single-node tree, output root value.
        return;
    }

    vector<int> leftBoundary, rightBoundary;

    if (!root->left) {
        printRBoundary(root, rightBoundary);
        for (int i = 0; i < (int)rightBoundary.size(); i++) {
            cout << rightBoundary[i];
            if (i + 1 < (int)rightBoundary.size()) {
              cout << " ";
            }
        }
        cout << endl;
        return;
    }

    if (!root->right) {
        printLBoundary(root, leftBoundary);
        for (int i = (int)leftBoundary.size() - 1; i >= 0; i--) {
            cout << leftBoundary[i];
            if (i > 0) {
              cout << " ";
            }
        }
        cout << endl;
        return;
    }

    printLBoundary(root->left, leftBoundary);
    printRBoundary(root->right, rightBoundary);

    for (int i = (int)leftBoundary.size() - 1; i >= 0; i--) {
        cout << leftBoundary[i] << " ";
    }

    cout << root->val << " ";

    for (int i = 0; i < (int)rightBoundary.size(); i++) {
        cout << rightBoundary[i];
        if (i + 1 < (int)rightBoundary.size()) {
          cout << " ";
        }
    }
    cout << endl;
}

int main() {
    Node* root = input_tree();

    printOuterTree(root);
    
    return 0;
}