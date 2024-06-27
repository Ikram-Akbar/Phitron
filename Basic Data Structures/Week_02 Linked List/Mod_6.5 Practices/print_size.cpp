
/* 
Question: Take a singly linked list as input and print the size of the linked list.
Sample Input 
2 1 5 3 4 8 9 -1
------------------
5 1 4 5 -1
Sample Output
7
-------
4
*/
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

void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* current_node = new Node(val);
    if(head == NULL)
    {
        head = current_node;
        tail = current_node;
        return;
    }
    //if Head available : 
    current_node->next = head;
    head = current_node;
    cout<<endl<<"Head Updated"<<endl;
}

void insert_at_tail(Node* &head, int val)
{
    Node* current_node = new Node(val);
    Node* temp_node = head;

    if(head == NULL)
    {
        head = current_node;
        return;
    }

    while (temp_node->next != NULL)
    {
       temp_node = temp_node->next;
    }
    temp_node->next = current_node;
}

void print_linked_list(Node* head)
{
    cout<<endl<<"Your linked list : ";
    if(head == NULL)
    {
        return ;
    }
    
    Node* temp_node = head;
    while (temp_node != NULL)
    {
       cout<<temp_node->val<<" ";
       temp_node = temp_node->next;
    }
    cout<<endl;
  
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while (true)
    {
        int option ;
        cout<<"Option 1 : Insert at Head"<<endl;
        cout<<"Option 2 : Insert at any Position"<<endl;
        cout<<"Option 3 : Insert at Tail ( Multiple value at a Time)"<<endl;
        cout<<"Option 4 : Print the size of Lined List"<<endl;
        cout<<"Option 5 : Print Linked List"<<endl;
        cout<<"Option 6 : Terminate Programme"<<endl;
        cout<<"Chose an Option : ";
        cin>>option;

        if(option == 1)
        {
            int val;
            cout<<"Enter a value : ";
            cin>>val;
            insert_at_head(head,tail,val);
        }
        else if(option == 2)
        {

        }
        else if(option == 3)
        {
            int val;
            cout << "Enter values for the linked list (end with -1):" << endl;
            while (cin >> val && val != -1)
            {
            insert_at_tail(head,val);
            }
        }
        else if(option == 4)
        {
           

        }
        else if(option == 5)
        {
            print_linked_list(head);
        }
        else if(option == 6)
        {
            cout<<"Exit the Programme Successfully ";
            break;
        }
        else
        {
            cout<<endl<<"Invalid Option";
        }
    }
    


    return 0;
}