#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {100, 200, 300};
    mylist.insert(next(mylist.begin(),2),444);

    for (int ele : mylist)
    {
        cout << ele << " ";
    }
    return 0;
}