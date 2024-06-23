#include<bits/stdc++.h>

using namespace std;
class Node {
  public: int val;
  Node * next;

  Node(int val) {
    this -> val = val;
    this -> next = NULL;
  }
};

void delete_node(Node * head, int pos) {
  Node * temp = head;
  for (int i = 0; i < pos - 1  ; i++) {
    temp = temp -> next;
  }
  Node * deleteNode = temp -> next;
  temp -> next = temp -> next -> next;
  delete deleteNode;

}

void print_linked_list(Node * head) {
  Node * temp = head;
  while (temp != NULL) {
    cout << temp -> val << " ";
    temp = temp -> next;
  }
  cout << endl;
}
int size_of_linked_list(Node * head) {
  int count = 0;
  Node * temp = head;
  while (temp != NULL) {
    count++;
    temp = temp -> next;
  }
  return count;
}

int main() {
  Node * head = new Node(100);
  Node * b = new Node(200);
  Node * c = new Node(300);
  Node * d = new Node(400);
  head -> next = b;
  b -> next = c;
  c -> next = d;

  cout << "=====================" << endl;
  print_linked_list(head);
  cout << "=====================" << endl;

  int pos;
  cout << "Enter a Position : ";
  cin >> pos;

  if (pos >= size_of_linked_list(head)) {
    cout << "Invalid Position" << endl;
  } else {
    delete_node(head, pos);
  }

  cout << "=====================" << endl;
  print_linked_list(head);
  cout << "=====================" << endl;

  return 0;
}