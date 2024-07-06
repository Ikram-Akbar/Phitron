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

void print_linked_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = tail->next;
}



bool check_palindrome(Node* head) {
    if (head == NULL) {
        return true;
    }

   
    Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }

   
    while (head != tail && head->pre != tail) {
        if (head->val != tail->val) {
            return false;
        }
        head = head->next;
        tail = tail->pre;
    }

    return true;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    
    
    while (cin >> val && val != -1) {
        insert_at_tail(head, tail, val);
    }

   

    if (check_palindrome(head)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
