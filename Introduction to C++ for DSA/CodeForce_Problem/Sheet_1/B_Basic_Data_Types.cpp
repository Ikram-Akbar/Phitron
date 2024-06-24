#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables for each data type
    int i;
    long long ll;
    char c;
    float f;
    double d;

    // Read the input values
    cin >> i >> ll >> c >> f >> d;

    // Print each value on a new line
    cout << i << endl;
    cout << ll << endl;
    cout << c << endl;
    
    // Use fixed and setprecision to control the floating-point output
    cout << fixed << setprecision(2) << f << endl;
    cout << fixed << setprecision(2) << d << endl;

    return 0;
}
