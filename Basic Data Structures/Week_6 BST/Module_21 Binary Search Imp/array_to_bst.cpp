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
int main()
{

    return 0;
}