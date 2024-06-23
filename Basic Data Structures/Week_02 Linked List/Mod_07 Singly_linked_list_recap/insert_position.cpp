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
  newNode->next = temp -> next;
  temp -> next = newNode;

}

/*
 * Insert at Head : 
 * ***************************
 * => Jeheto Head change korte hobe tahole funciton er ref dite hobe, ( & );
 * => create a New Node ;
 * => newNode er Next e Head er Memory address ta rakhete hobe - 
 * => Head = newNode assign korete hobe.
 */ 

void insert_at_head(Node* &head, int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    cout<<endl<<"tail Updated"<<endl<<endl;
}

void print_linked_list(Node * head) {
  Node * temp = head;
  while (temp != NULL) {
    cout << temp -> val << " ";
    temp = temp -> next;
  }
  cout<<endl;
}

int main() {
  Node * head = new Node(100);
  Node * b = new Node(200);
  Node * c = new Node(300);
  Node * d = new Node(400);
  Node * tail = d;

  head -> next = b;
  b -> next = c;
  c -> next = d;

  int pos, val;

  cout<<"Enter a Position : ";
  cin>>pos;
  cout<<"Enter a Value : ";
  cin>>val;

  if(pos > size_of_linked_list(head))
  {
    cout<<" Invalid Index"<<endl;
  }
  else if(pos == 0)
  {
    insert_at_head(head,val);
  }
  else if(pos == size_of_linked_list(head))
  {
    insert_at_tail(head,tail,val);
  }
  else
  {
    insert_at_pos(head, pos, val);
  }
    cout<<"====================="<<endl;
    print_linked_list(head);
    cout<<"====================="<<endl;
  return 0;
}