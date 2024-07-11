#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> myNumbers;
    int n;
    cin >> n;
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            myNumbers.push(val);
        }
    }

    // print :
    while(!myNumbers.empty())
    {
        cout<<myNumbers.top()<<" ";
        myNumbers.pop();
    }
    return 0;
}