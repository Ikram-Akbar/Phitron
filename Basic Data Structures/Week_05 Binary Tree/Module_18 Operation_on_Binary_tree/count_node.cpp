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
    int val;
    cin >> val;
    Node *root;

    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1st :
        Node *f = q.front();
        q.pop();

        // 2nd Steps :
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;

        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        f->left = left;
        f->right = right;

        // 3rd steps :
        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
    return root;
};

int count_node(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l + r + 1;
}

int main()
{
    Node *root = input_tree();
    cout << count_node(root) << endl;

    return 0;
}
