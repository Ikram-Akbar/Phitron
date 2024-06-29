#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
         
    Node(int val){
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
  
void print_linked_list(Node * head) {
  Node * temp = head;
  while (temp != NULL) {
    cout << temp -> val << " ";
    temp = temp -> next;
  }
  cout<<endl;
}

bool compare_linked_lists(Node* head1, Node* head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->val != temp2->val) {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return (temp1 == NULL && temp2 == NULL);
}

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;
    
    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head1, tail1, val);
    }

    while(true) {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head2, tail2, val);
    }

    if (compare_linked_lists(head1, head2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
