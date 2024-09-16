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

void delete_at_pos(Node*& head, Node*& tail, int pos)
{
    if (pos < 0 || pos >= size(head))
    {
        cout << "Invalid position" << endl;
        return;
    }

    if (pos == 0)
    {
        delete_head(head);
        return;
    }

    if (pos == size(head) - 1)
    {
        delete_at_tail(tail);
        return;
    }

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
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node* deleteNode = tail;
    tail = tail->pre;
    if (tail != NULL)
    {
        tail->next = NULL;
    }
    delete deleteNode;
}

void delete_head(Node*& head)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    Node* deleteNode = head;
    head = head->next;
    if (head != NULL)
    {
        head->pre = NULL;
    }
    delete deleteNode;
}

void display_menu()
{
    cout << "Menu: " << endl;
    cout << "1. Print List (Normal Order)" << endl;
    cout << "2. Print List (Reverse Order)" << endl;
    cout << "3. Delete at Position" << endl;
    cout << "4. Delete Head" << endl;
    cout << "5. Delete Tail" << endl;
    cout << "6. Exit" << endl;
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

    int choice, pos;

    while (true)
    {
        display_menu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                print_normal(head);
                break;

            case 2:
                print_reverse(tail);
                break;

            case 3:
                cout << "Enter position to delete: ";
                cin >> pos;
                delete_at_pos(head, tail, pos);
                break;

            case 4:
                delete_head(head);
                if (head == NULL) 
                {
                    tail = NULL;
                }
                break;

            case 5:
                delete_at_tail(tail);
                if (tail == NULL) 
                {
                    head = NULL;
                }
                break;

            case 6:
                exit(0);
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
