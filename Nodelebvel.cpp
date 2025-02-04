// Problem statement
// Ninja has been given a binary tree having N nodes and an integer M, he needs to find the level of node M. He finds it difficult to solve and asks for your help.

// Note:

// Consider root to be at level 1. It is guaranteed that all the nodes in the binary tree have distinct values.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 5
// 0 <= N <= 3000
// 0 <= node data <= 10^9  

// Time Limit: 1 sec
// Sample Input 1:
// 2
// 1 2 3 -1 -1 -1  6 -1 -1
// 6
// 1 2 -1 -1 -1
// 1
// Sample Output 1:
// 3
// 1
// Explanation of Sample Input 1:
//  For the first test case, the given binary tree is shown below.

#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    // Write your code here.
    // First  amr value gula k pair kore nite hbe and traverse korte hbe 
    //then oi time e check korte hbe is there is  a match or not?

     queue<pair<TreeNode<int>* ,int>>q;
      if(root){
        q.push({root, 1});
      }
      else{
          return 0;
      }
    
    // Amra traverse korbo

    while(!q.empty())
    {
        // Ber kore anbo
        // oi  node niye kaaj korbo
        //child gula k push korbo

       pair<TreeNode <int> *,int> parent = q.front();
       q.pop();

       TreeNode<int> * newNode = parent.first;
       int level = parent.second;

       if(newNode->val ==searchedValue){
           return level;
       }

       if(newNode->left){
           q.push({newNode->left ,level+1});
       }
       if(newNode->right){
           q.push({newNode->right ,level+1});
       }
    };

}
