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

void insert_at_tail(Node* &head, Node* &tail, int val) { 
    Node* newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
  
void print_linked_list(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void remove_duplicates(Node* head) {
    if(head == NULL) return;

    Node* current = head;

    while(current != NULL && current->next != NULL) {
        Node* runner = current;
        while(runner->next != NULL) {
            if(runner->next->val == current->val) {

                Node* duplicate = runner->next;
                runner->next = runner->next->next;
                delete duplicate;
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }

    remove_duplicates(head);
    print_linked_list(head);

    return 0;
}
