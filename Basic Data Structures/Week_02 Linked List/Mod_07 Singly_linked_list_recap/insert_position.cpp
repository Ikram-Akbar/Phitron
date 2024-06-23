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

int size_of_linked_list(Node* head)
{
    int count = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

/*
    Insert at a Position : 
   *********************************************************
   * => loop use kore (pos-1) , je position e chai tar ager ghor e jabo.. 
   * => ager ghorer modde ( next) porer ghorer pointer ache...
   * => tahole newNode er next ke se pointer assign kore dei...
   * => newNode er address ta ager ghorer next e assign kore dei.. 
   ***********************************************************
*/

void insert_at_pos(Node * head, int pos, int val) {
  Node * newNode = new Node(val);
  Node * temp = head;
  for (int i = 1; i < pos - 1; i++) {
    temp = temp -> next;
  }
  newNode = temp -> next;
  temp -> next = newNode;

}

void print_linked_list(Node * head) {
  Node * temp = head;
  while (temp != NULL) {
    cout << temp -> val << " ";
    temp = temp -> next;
  }
}

int main() {
  Node * head = new Node(100);
  Node * b = new Node(200);
  Node * c = new Node(300);
  Node * d = new Node(400);
  head -> next = b;
  b -> next = c;
  c -> next = d;

  int pos, val;
  cin >> pos >> val;
  if(pos > size_of_linked_list(head))
  {
    cout<<" invalid Index"<<endl;
  }
  else
  {
    insert_at_pos(head, pos, val);
  }
  print_linked_list(head);
  return 0;
}