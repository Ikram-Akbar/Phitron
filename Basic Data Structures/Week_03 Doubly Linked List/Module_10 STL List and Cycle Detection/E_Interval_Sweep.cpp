#include <iostream>
#include <cmath>
using namespace std;

string interval_sweep(int a, int b) {
    // Handle the special case where both a and b are zero
    if (a == 0 && b == 0) {
        return "NO";
    }

    int total_numbers = a + b;
    
    if (total_numbers % 2 == 1) {
        // If total is odd, a and b must differ by 1
        if (abs(a - b) == 1) {
            return "YES";
        } else {
            return "NO";
        }
    } else {
        // If total is even, a and b must be equal
        if (a == b) {
            return "YES";
        } else {
            return "NO";
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    
    cout << interval_sweep(a, b) << endl;
    
    return 0;
}
