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

void insert_at_tail(Node* &head, int v)
{
    Node* newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;

    }
    temp->next = newNode;
};

void print_Linked_list(Node* head)
{
    cout<<"--- --- --- --- --- ---  --- --- --- --- "<<endl;
    cout<<"Your Linked List : ";
   
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
    cout<<"--- --- --- --- --- ---  --- --- --- --- "<<endl;
    
}
int main()
{
    Node* head = NULL;
   while(true)
   {

    cout<<" ===== Chose a Option from this below ===== "<<endl;
    cout<<"Option 1 : Insert at Tail"<<endl;
    cout<<"Option 2 : Print the Linked List"<<endl;
    cout<<"Option 3 : Terminate"<<endl;
    int option ;
    cin>>option;
    if(option == 1)
    {
        int v; 
        cout<<"Insert a Value : ";
        cin>>v;
        insert_at_tail(head,v);
    }
    else if(option == 2)
    {
        print_Linked_list(head);
    }
    else if(option == 3)
    {
        break;
    }
   }

    return 0;
}