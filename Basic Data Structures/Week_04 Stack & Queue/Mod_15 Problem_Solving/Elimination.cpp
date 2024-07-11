#include <iostream>
#include <string>
#include <stack>

using namespace std;

// Function to check if the string becomes empty after all eliminations
string checkIfEmpty(string s) {
    stack<char> stk;
    
    for (char ch : s) {
        if (!stk.empty() && stk.top() == ch) {
            stk.pop(); // Eliminate current character and its previous adjacent
        } else {
            stk.push(ch); // Push current character onto stack
        }
    }
    
    return (stk.empty() ? "YES" : "NO");
}

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        string s;
        cin >> s; // Input binary string
        
        // Check if the string becomes empty after all eliminations
        cout << checkIfEmpty(s) << endl;
    }
    
    return 0;
}
