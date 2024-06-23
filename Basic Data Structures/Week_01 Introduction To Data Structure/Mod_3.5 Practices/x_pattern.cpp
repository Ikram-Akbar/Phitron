#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Iterate through each row
    for (int i = 0; i < N; i++) {
        // Iterate through each column
        for (int j = 0; j < N; j++) {
            // Center of the pattern
            if (i == j && i == N / 2) {
                cout << 'X';
            }
            // Main diagonal
            else if (i == j) {
                cout << '\\';
            }
            // Anti-diagonal
            else if (i + j == N - 1) {
                cout << '/';
            }
            // Spaces elsewhere
            else {
                cout << ' ';
            }
        }
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
