#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int val;
        Node* next;
        Node* pre;
         
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

void print_normal(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
       cout<<temp->val<<" ";
       temp = temp->next;
    }
    cout<<endl;
}

void print_reverse(Node* tail)
{
    Node* temp = tail;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->pre;
    }
    cout<<endl;
}

int size(Node* head)
{
    Node* temp = head;
    int count = 0;

    while( temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;

}

void delete_at_pos(Node* head, int pos)
{
    Node* temp = head;
    for(int i=0; i<pos-1; i++)
    {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->pre = temp;
    delete deleteNode;
}
void delete_at_tail(Node*& tail)
{
    Node* deleteNode = tail;
    tail = tail->pre;
    delete deleteNode;
    tail->next = NULL;
}
void delete_head(Node*& head)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->pre = NULL;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c;

    head->next = a;
    a->next = b;
    a->pre = head;
    b->next = c;
    b->pre = a;
    c->pre = b; 

    int pos;
    cout<<"Enter a position : ";
    cin>>pos;

    if(pos >= size(head))
    {
        cout<<"Invalid"<<endl;
    }
    else if(pos == 0)
    {
        delete_head(head);
    }
    else if(pos == size(head)-1)
    {
        delete_at_tail(tail);
    }
    else
    {
        delete_at_pos(head,pos);
    }

    print_normal(head);
    print_reverse(tail);
    return 0;
}