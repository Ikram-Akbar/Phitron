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

class myStack 
{
    public: 
    int sz = 0;

    Node* head = NULL;
    Node* tail = NULL;

    void push(int val)
    {
        sz++;
       Node* newNode = new Node(val);
       if(head == NULL)
       {
        head = newNode;
        tail = newNode;
        return;
       }
       newNode->pre = tail;
       tail->next = newNode;
       tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node* deleteNode = tail;
        tail = tail->pre;
        if(tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL; 
        }
        delete deleteNode;
    }

    int top()
    {
        return tail->val;
    }
    
    int size ()
    {
        return sz;
    }
    bool empty()
    {
        if(sz == 0)
        {
            return true;
        }
        else return false;
    }

};

int main()
{
    myStack st;
    int n;
    cin>>n;
    for(int i= 0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
     
    return 0;
}