#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        
        // Swap the first characters of a and b
        swap(a[0], b[0]);
        
        // Output the modified strings
        cout << a << " " << b << endl;
    }
    return 0;
}
