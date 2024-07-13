#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> myStack;
    queue<int> myQ;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        myStack.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int ele;
        cin >> ele;
        myQ.push(ele);
    }

    if (myStack.size() != myQ.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    bool flag = true;
    while (!myStack.empty())
    {
        int val = myStack.top();
        myStack.pop();
        int ele = myQ.front();
        myQ.pop();
        if (val != ele)
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
