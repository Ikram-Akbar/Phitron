#include <iostream>
using namespace std;

int main() {
    unsigned long long a, b, k;
    cin >> a >> b >> k;

    bool a_divisible = (a % k == 0);
    bool b_divisible = (b % k == 0);

    if (a_divisible && b_divisible) {
        cout << "Both" << endl;
    } else if (a_divisible) {
        cout << "Memo" << endl;
    } else if (b_divisible) {
        cout << "Momo" << endl;
    } else {
        cout << "No One" << endl;
    }

    return 0;
}
