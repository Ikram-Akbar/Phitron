#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;

            return;
        }

        tail->next = newNode;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    int front()
    {
        if (head != NULL)
            return head->val;
        else
            throw runtime_error("Queue is empty");
    }

    int size()
    {
        return sz;
    }
    bool isEmpty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    myQueue q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;

    return 0;
}