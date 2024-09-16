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

Node* createTree() {
    int rootVal;
    cin >> rootVal;

    if (rootVal == -1) return NULL;

    Node* root = new Node(rootVal);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        int leftVal;
        cin >> leftVal;
        if (leftVal != -1) {
            current->left = new Node(leftVal);
            q.push(current->left);
        }

        int rightVal;
        cin >> rightVal;
        if (rightVal != -1) {
            current->right = new Node(rightVal);
            q.push(current->right);
        }
    }

    return root;
}

int countNodes(Node* root) {
    if (!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int height(Node* root) {
    if (!root) return -1;
    return 1 + max(height(root->left), height(root->right));
}

bool isPerfectBT(Node* root) {
    int nodeCount = countNodes(root);
    int treeHeight = height(root);
    int expectedNodes = pow(2, treeHeight + 1) - 1;
    return nodeCount == expectedNodes;
}

int main() {
    Node* root = createTree();
    if (isPerfectBT(root)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
