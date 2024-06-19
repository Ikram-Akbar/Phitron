#include<bits/stdc++.h>
using namespace std;
void fun(int* &p)
{
    p = NULL;
    // *p = NULL;
    cout<<"IN function P "<<p<<endl; // IN function P 0
}

int main()
{
    int val = 10;
    int* myPtr = &val;
    cout<<myPtr<<endl;  // 0x61ff08
    cout<<*myPtr<<endl; // 10

    fun(myPtr);
    cout<<"after function call: "<<myPtr<<endl;
    /* 
    0x61ff0c
    10
    IN function P 0
    after function call: 0
     */
    return 0;
}