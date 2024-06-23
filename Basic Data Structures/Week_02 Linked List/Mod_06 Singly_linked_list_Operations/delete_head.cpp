#include<bits/stdc++.h>
using namespace std;
class Node {
  public: int val;
  Node * next;
  
  Node(int val) 
  {
    this -> val = val;
    this -> next = NULL;
  }
};

void insert_at_tail(Node * & head, int v) {
  Node * newNode = new Node(v);
  if (head == NULL) {
    head = newNode;
    cout<<"===== ===== ====="<<endl<<"Inserted at Head"<<endl<<"===== ===== ====="<<endl;
    return;
  }

  Node * temp = head;
  while (temp -> next != NULL) {
    temp = temp -> next;
  }
  temp -> next = newNode;
  cout<<"==============="<<endl<<"Inserted at Tail"<<endl<<"==============="<<endl;
};

void print_Linked_list(Node * head) {
 
  cout << "===== Your Linked List ====="<<endl;
  Node * temp = head;
  while (temp != NULL) {
    cout << temp -> val << " ";
    temp = temp -> next;
  }
  cout<<endl<<"==================="<<endl;;

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
void delete_node_by_position(Node* &head, int pos)
{
    Node* temp = head;
    for(int i=1; i<pos-1; i++)
    {
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout<<endl<<"Deleted Position "<<pos<<endl<<endl;
}

void delete_head(Node* &head)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout<<endl<<"Deleted Head "<<endl<<endl;
}

int main() {
  Node * head = NULL;

  while (true) {

    cout << " ===== Chose a Option from this below ===== " << endl;
    cout << "Option 1 : Insert at Tail" << endl;
    cout << "Option 2 : Print the Linked List" << endl;
    cout << "Option 3 : Insert at Position" << endl;
    cout << "Option 4 : Insert at Head" << endl;
    cout << "Option 5 : Delete a Node by Position" << endl;
    cout << "Option 6 : Delete Node Head" << endl;
    cout << "Option 7 : Terminate" << endl;
    cout << " =============== =============== " << endl;

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
    else if(option == 5)
    {
        int pos;
        cout<<"Enter Position: ";
        cin>>pos;
        if(pos == 0)
        {
            delete_head(head);
        }
        else
        {
            delete_node_by_position(head,pos);
        }
    }
    else if(option == 6)
    {
        delete_head(head);
    }
    else if (option == 7) 
    {
      break;
    }
  }

  return 0;
}