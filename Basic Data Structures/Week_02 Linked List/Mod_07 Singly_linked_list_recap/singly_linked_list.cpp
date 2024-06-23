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
void print_linked_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    //connect the pointer 
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);

    // print the value from head : 
    /* 
    cout<<"head - "<<head->val<<endl;
    cout<<"a - "<<head->next->val<<endl;
    cout<<"b - "<<head->next->next->val<<endl;
    cout<<"c - "<<head->next->next->next->val<<endl;
    cout<<"d - "<<head->next->next->next->next->val<<endl;
    cout<<"NULL - "<<head->next->next->next->next->next<<endl; 
    */
    return 0;
}