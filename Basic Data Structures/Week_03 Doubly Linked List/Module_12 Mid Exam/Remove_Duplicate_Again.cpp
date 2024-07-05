#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>myList;
    int val;
    while(cin>>val && val != -1)
    {
        myList.push_back(val);
    } 
    myList.sort();
    myList.unique();

    for (auto it = myList.begin(); it != myList.end(); it++) {
        cout << *it << " ";
    }
    return 0;
}