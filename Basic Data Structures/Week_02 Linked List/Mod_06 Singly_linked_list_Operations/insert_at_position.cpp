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

void insert_at_tail(Node * & head, int v) {
  Node * newNode = new Node(v);
  if (head == NULL) {
    head = newNode;
    cout<<"----------------"<<endl;
    cout<<"Inserted at Head"<<endl;
    cout<<"----------------"<<endl;
    return;
  }

  Node * temp = head;
  while (temp -> next != NULL) {
    temp = temp -> next;
  }
  temp -> next = newNode;
  cout<<"----------------"<<endl;
  cout<<"Inserted at Tail"<<endl;
  cout<<"----------------"<<endl;
};

void print_Linked_list(Node * head) {
  cout << "--- --- --- --- --- ---  --- --- --- --- " << endl<<endl;
  cout << "Your Linked List : ";

  Node * temp = head;
  while (temp != NULL) {
    cout << temp -> val << " ";
    temp = temp -> next;
  }
  cout << endl<<endl;
  cout << "--- --- --- --- --- ---  --- --- --- --- " << endl<<endl;

}

void insert_at_position(Node* head, int pos, int val)
{
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i=1; i<= pos-1; i++)
    {
        temp = temp->next;
    }
    // 
    newNode->next = temp->next;
    temp->next = newNode;
}
void insert_at_head(Node* &head, int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"Inserted at head"<<endl;
}

int main() {
  Node * head = NULL;

  while (true) {

    cout << " ===== Chose a Option from this below ===== " << endl;
    cout << "Option 1 : Insert at Tail" << endl;
    cout << "Option 2 : Print the Linked List" << endl;
    cout << "Option 3 : Insert at Position" << endl;
    cout << "Option 4 : Insert at Head" << endl;
    cout << "Option 5 : Terminate" << endl;

    int option;
    cin >> option;

    if (option == 1) {
      int v;
      cout << "Insert a Value : ";
      cin >> v;
      insert_at_tail(head, v);
    } 
    else if (option == 2) 
    {
      print_Linked_list(head);
    }
    else if(option == 3)
    {
        int pos,val;
        cout<<"Enter Position: ";
        cin>>pos;
        cout<<"Enter Value: ";
        cin>>val;
        if(pos == 0)
        {
            insert_at_head(head,val);
        }
        else
        {
            insert_at_position(head,pos,val);
        }
       
    }
    else if(option == 4)
    {
        int val;
        cout<<"Enter a Value: ";
        cin>>val;
        insert_at_head(head,val);
    }
    else if (option == 5) 
    {
      break;
    }
  }

  return 0;
}