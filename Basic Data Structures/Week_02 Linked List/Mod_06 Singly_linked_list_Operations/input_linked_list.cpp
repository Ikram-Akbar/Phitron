#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
     
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node*& head, int v) {
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_Linked_list(Node* head) {
    cout << "===== Your Linked List =====" << endl;
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_at_tail(head, val);
    }
    
    print_Linked_list(head);
    
    return 0;
}
