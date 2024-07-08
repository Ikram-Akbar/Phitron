#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* pre;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

int size(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->pre = tail;
        tail = newNode;
    }
}

void printList(Node* head, Node* tail) {
    cout << "L -> ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    cout << "R -> ";
    temp = tail;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->pre;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    while (cin >> val && val != -1) {
        insert(head, tail, val);
    }

    printList(head, tail);

    return 0;
}
