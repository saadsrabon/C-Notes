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
    }
};

Node *input_tree()
{
    int x;
    cin >> x;

    Node *root;
    if (x == -1)
        root = NULL;
    else
        root = new Node(x);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            p->left = new Node(l);
            q.push(p->left);
        }
        if (r != -1)
        {
            p->right = new Node(r);
            q.push(p->right);
        }
    }

    return root;
}

void print_level_nodes(Node *root, int targetLevel)
{
    if (root == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<Node *, int>> q;
    q.push({root, 0});
    vector<int> result;

    while (!q.empty())
    {
        Node *current = q.front().first;
        int level = q.front().second;
        q.pop();

        if (level == targetLevel)
        {
            result.push_back(current->val);
        }

        if (current->left)
        {
            q.push({current->left, level + 1});
        }
        if (current->right)
        {
            q.push({current->right, level + 1});
        }
    }

    if (result.empty())
    {
        cout << "Invalid" << endl;
    }
    else
    {
        for (int val : result)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main()
{

    Node *root = input_tree();

    int targetLevel;
    cin >> targetLevel;

    print_level_nodes(root, targetLevel);

    return 0;
}
