#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>myList = {10,20,30,40};
    list <int > newList ;
      
    // option 1 : 
    newList = myList;
    //option 2 : 
    newList.assign(myList.begin(), myList.end());

    for(int val: newList)
    {
        cout<<val<<" ";
    }
     
    return 0;
}