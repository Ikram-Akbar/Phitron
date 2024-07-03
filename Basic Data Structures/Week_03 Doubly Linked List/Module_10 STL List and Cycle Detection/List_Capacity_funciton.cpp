#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>myList = {10,20,30};
    //max_size() =>
    cout<<" Capacity of this list : " << myList.max_size()<<endl;
    // clear()  =>
    // myList.clear();

    //resize()  =>
    myList.resize(3);
    myList.resize(2);

    for(int val : myList)
    {
        cout<<val<<" ";
    } 
    return 0;
}