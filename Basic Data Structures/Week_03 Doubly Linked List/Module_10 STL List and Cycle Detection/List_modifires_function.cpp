#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>myList = {10,20,30};
    list<int>newList ;
   
    newList = myList;  //method : 1
    newList.assign(myList.begin(),myList.end()); //Method : 2 (long process)

    //push_back, push_front
    
    for(int val : newList)
    {
        cout<<val<<" ";
    }
    return 0;
}