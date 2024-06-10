#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    stringstream ss(input);
    string word;

    for (; ss >> word; ) {
        if (word == "Jessica") {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
     
}