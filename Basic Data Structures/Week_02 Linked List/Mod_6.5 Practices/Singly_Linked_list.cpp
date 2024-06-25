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
//Insert at any position : 
void insert_at_position(Node* &head, int pos, int val)
{
    Node* newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        cout<<endl<<"Insert at Head"<<endl;
        return;
    }
    Node* temp = head;
    for(int i = 0; i < pos-1 ; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next= newNode;
    cout<<endl<<" Node Added Successfully at "<<pos<<endl;

}

//print the Linked_list : 
void print_the_list(Node* head)
{
    if(head == NULL)
    {
        cout<<"Your List is Empty"<<endl;
        return;
    }
    cout<<"Your Linked List : ";
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl<<endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while (true)
    {
        int option;
        cout<<"Option : 1 - Insert at Postion"<<endl;
        cout<<"Option : 2 - Print the Linked List"<<endl;
        cout<<"Option : 3 - Exit Program"<<endl;
        cout<<"==== Please Choose an Option ===="<<endl;
        cin>>option;

        if(option == 1)
        {
            int pos, val ;
            cout <<"Enter Position : ";
            cin>>pos;
            cout<<"Enter value : ";
            cin>>val;
            insert_at_position(head,pos,val);
        }
        else if(option == 2)
        {
            print_the_list(head);
        }
        else if(option == 3)
        {
            cout<<"Exit the Program Successfully"<<endl;
            break;
        }
    }
    

    return 0;
}