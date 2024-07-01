#include<bits/stdc++.h>
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

void print_normal(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node* tail) {
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->pre;
    }
    cout << endl;
}

void insert_at_pos(Node* head, int pos, int val) {
    Node* newNode = new Node(val);
    Node* temp = head;
    for (int i = 0; i < pos - 1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    if (temp->next != NULL) {
        temp->next->pre = newNode;
    }
    temp->next = newNode;
    newNode->pre = temp;
}

int size(Node* head) {
    Node* temp = head;
    int count = 0;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_at_head(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->pre = newNode;
    head = newNode;
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

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Insert at head\n";
        cout << "2. Insert at position\n";
        cout << "3. Insert at tail\n";
        cout << "4. Print list\n";
        cout << "5. Print list in reverse\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            int val;
            cout << "Enter value to insert at head: ";
            cin >> val;
            insert_at_head(head, tail, val);
        } else if (choice == 2) {
            int pos, val;
            cout << "Enter position to insert: ";
            cin >> pos;
            if (pos <= 0 || pos > size(head) + 1) {
                cout << "Invalid position!" << endl;
            } else {
                cout << "Enter value to insert at position " << pos << ": ";
                cin >> val;
                if (pos == 1) {
                    insert_at_head(head, tail, val);
                } else if (pos == size(head) + 1) {
                    insert_at_tail(head, tail, val);
                } else {
                    insert_at_pos(head, pos, val);
                }
            }
        } else if (choice == 3) {
            int val;
            cout << "Enter value to insert at tail: ";
            cin >> val;
            insert_at_tail(head, tail, val);
        } else if (choice == 4) {
            print_normal(head);
        } else if (choice == 5) {
            print_reverse(tail);
        } else if (choice == 6) {
            break;
        } else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
