#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> x(3);
        cin >> x[0] >> x[1] >> x[2];
        sort(x.begin(), x.end());
        int a = x[1];  
        int f_a = abs(x[0] - a) + abs(x[1] - a) + abs(x[2] - a);
        cout << f_a << endl;
    }
    return 0;
}
