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

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c;

    //connection : 
    //head->pre = NULL;
    head->next = a;
    a->next = b;
    a->pre = head;

    b->next = c;
    b->pre = a;

    // c->next = NULL;
    c->pre = b;
    print_normal(head);
    print_reverse(tail);
    return 0;
}