#include <iostream>
using namespace std;

const int MOD = 1000000007;

// Function to compute MEOW(a) for given n
long long computeMEOW(int n) {
    long long meow = 0;
    long long pow2 = 1;
    for (int i = 1; i <= n; ++i) {
        meow = (meow + i * pow2) % MOD;
        pow2 = (pow2 * 2) % MOD;
    }
    return meow;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << computeMEOW(n) << endl;
    }
    return 0;
}
