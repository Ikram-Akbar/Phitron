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

void level_order_print(Node *root)
{
    if (root == NULL)
    {
        cout << "tree is blank" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1st steps :

        Node *f = q.front();
        q.pop();

        // second steps :
        cout << f->val << " ";

        // 3rd steps :
        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
};

bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;
    if (x < root->val)
        return search(root->left, x);
    else
        return search(root->right, x);
};

void insert(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }
    if (x < root->val)
    {
        if (root->left == NULL)
            root->left = new Node(x);
        else
            insert(root->left, x);
    }
    else
    {
        if (root->right == NULL)
            root->right = new Node(x);
        else
            insert(root->right, x);
    }
}

int main()
{

    Node *root = input_tree();
    insert(root,10);
    insert(root,28);
    insert(root,29);
    level_order_print(root);

    return 0;
}