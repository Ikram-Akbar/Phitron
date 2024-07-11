#include <bits/stdc++.h>
using namespace std;

class myStack
{
private:
    vector<int> ages;

public:
    // Push a value onto the stack
    void push(int val) {
        ages.push_back(val);
    }

    // Pop the top value from the stack
    void pop() {
        ages.pop_back();
    }

    // Get the top value of the stack
    int top() {
        return ages.back();
    }

    // Get the size of the stack
    int size() {
        return ages.size();
    }

    // Check if the stack is empty
    bool is_empty() {
        return ages.empty();
    }
};

int main()
{   
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // Print and empty the stack
    while (!st.is_empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
