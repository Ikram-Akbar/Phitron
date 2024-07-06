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

void print_from_left_to_right(Node* head) {
    cout << "L -> ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_from_right_to_left(Node* tail) {
    cout << "R -> ";
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->pre;
    }
    cout << endl;
}

void insert_at_index(Node*& head, Node*& tail, int index, int val) {
    Node* newNode = new Node(val);

    if (index == 0) {
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->pre = newNode;
            head = newNode;
        }
        return;
    }

    Node* temp = head;
    int currentIndex = 0;
    while (currentIndex < index - 1 && temp != NULL) {
        temp = temp->next;
        currentIndex++;
    }

    if (temp == NULL || (temp->next == NULL && currentIndex < index - 1)) {
        cout << "Invalid" << endl;
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    newNode->pre = temp;

    if (temp->next != NULL) {
        temp->next->pre = newNode;
    } else {
        tail = newNode;
    }

    temp->next = newNode;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;

        if (X > 0 && head == NULL) {
            cout << "Invalid" << endl;
        } else {
            insert_at_index(head, tail, X, V);
            if (head != NULL) {
                print_from_left_to_right(head);
                print_from_right_to_left(tail);
            }
        }
    }

    return 0;
}
