#include <bits/stdc++.h>
using namespace std;

bool isValidString(string S)
{
    stack<char> st;
    for (char c : S)
    {
        if (!st.empty())
        {
            if ((c == '0' && st.top() == '1') || (c == '1' && st.top() == '0'))
            {
                st.pop();
                continue;
            }
        }
        st.push(c);
    }
    return st.empty();
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        if (isValidString(S))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
