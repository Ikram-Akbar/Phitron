#include <bits/stdc++.h>
using namespace std;

bool check_empty(string S)
{
    stack<char> st;
    for (char ch : S) {
        if (!st.empty()) {
            if (st.top() == '0' && ch == '1') {
                st.pop(); 
                continue;
            }
        }
        st.push(ch); 
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
        if (check_empty(S))
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
