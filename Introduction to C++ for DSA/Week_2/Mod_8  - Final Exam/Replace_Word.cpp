#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        string S, X;
        cin >> S >> X;

        while (S.find(X) != -1) {
            S.replace(S.find(X), X.length(), "#");
        }

        cout << "Test Case " << i << ": " << S << endl;
    }

    return 0;
}
