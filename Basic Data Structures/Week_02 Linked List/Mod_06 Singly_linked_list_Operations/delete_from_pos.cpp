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

void insert_at_head(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void delete_node_by_position(Node* &head, Node* &tail, int pos) {
    
    if (head == NULL) return;
    if (pos == 0) {
      Node* temp = head;
      head = head->next;
      if (head == NULL) {
        tail = NULL;
      }
      delete temp;
      return;
    }

    Node* temp = head;
    for (int i = 0; temp != NULL && i < pos - 1; i++) {
      temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) return;

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;

    if (temp->next == NULL) {
      tail = temp;
    }

    delete deleteNode;
}

void print_linked_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;

    while (  q--) {
      int X, V;
      cin >> X >> V;

      if (X == 0) {
        insert_at_head(head, tail, V);
      } else if (X == 1) {
        insert_at_tail(head, tail, V);
      } else if (X == 2) {
        delete_node_by_position(head, tail, V);
      }

      print_linked_list(head);
    }

    return 0;
}
