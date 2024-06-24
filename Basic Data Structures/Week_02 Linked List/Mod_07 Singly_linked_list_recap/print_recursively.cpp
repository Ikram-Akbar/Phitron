#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int val;
        Node* next;
         
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void print_recursion(Node* head)
{
    if(head == NULL)return;
    cout<<head->val<<" ";
    print_recursion(head->next);
    
}
void print_recursion_reversed(Node* head)
{
    if(head == NULL)return;
    print_recursion_reversed(head->next);
    cout<<head->val<<" ";
    
}

int main()
{
  Node * head = new Node(100);
  Node * b = new Node(200);
  Node * c = new Node(300);
  Node * d = new Node(400);
  Node * tail = d;

  head -> next = b;
  b -> next = c;
  c -> next = d;
  
  print_recursion(head);
  cout<<endl;
  print_recursion_reversed(head);

    return 0;
}