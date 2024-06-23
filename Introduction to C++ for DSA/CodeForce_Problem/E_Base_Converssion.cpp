#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(int n) {
    if (n == 0) {
        return "0";
    }
    if (n == 1) {
        return "1";
    }
    return decimalToBinary(n / 2) + (n % 2 == 0 ? "0" : "1");
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a;
        cin >> a;
        cout << decimalToBinary(a) << endl;
    } 
    
    return 0;
}
