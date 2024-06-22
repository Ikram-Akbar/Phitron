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
void insert_at_tail(Node* head, int val)
{
    // create a Node if the Head if NULL : 

    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
    }
    Node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;

}

void print_it(Node* head)
{
    cout<<endl<<endl<< "Your Linked List"<<endl;
    Node* temp = head;
    while(temp->next != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = NULL;
    int val, opt;
    cout<<"enter a value :"<<endl;
    cin>>val;
    cout<<"chose option :"<<endl;
    cout<<"OPT 1 : Insert at Tail"<<endl;
    cout<<"OPT 2 : Print it"<<endl;
    
    return 0;
}