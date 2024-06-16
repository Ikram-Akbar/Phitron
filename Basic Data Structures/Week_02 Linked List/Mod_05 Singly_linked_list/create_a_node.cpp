#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int val;
    Node* next;
};

int main()
{
    Node a,b;
    a.val = 100;
    b.val = 400;
    
    a.next = &b;
    b.next = NULL;

    cout<<a.val<<endl;
    cout<<(*a.next).val<<endl; //dereference 
    // cout<<a.next->val<<endl; //shorthand
     
  return 0;
}