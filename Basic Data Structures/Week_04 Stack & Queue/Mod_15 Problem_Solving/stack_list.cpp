#include <bits/stdc++.h>
using namespace std;
class myStack
{
private:
    list<int> numbers;

public:
    void push(int val)
    {
        numbers.push_back(val);
    }
    void pop()
    {
        numbers.pop_back();
    }
    int top()
    {
        return numbers.back();
    }
    int size()
    {
        return numbers.size();
    }
    bool is_empty()
    {
        return numbers.empty();
    }
};

int main()
{
    myStack st;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    while (!st.is_empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}