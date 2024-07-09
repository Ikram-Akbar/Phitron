#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_linked_list(Node *head)
{
    Node *temp = head;
    cout<<"Your List are => ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout<<endl;
}

void print_end_to_start(Node* tail)
{
    Node *current = tail;
    while(current != NULL)
    {
        cout<<current->val<<" ";
        current = current->prev;
    }
}

int main()
{
    Node *head = new Node(2);
    Node *second_node = new Node(4);
    Node *third_node = new Node(6);
    Node *tail = third_node;

    // connection :
    head->next = second_node;
    head->prev = NULL;

    second_node->prev = head;
    second_node->next = third_node;

    third_node->prev = second_node;
    third_node->next = NULL;

    // print :
    print_linked_list(head);
    print_end_to_start(tail);
    return 0;
}