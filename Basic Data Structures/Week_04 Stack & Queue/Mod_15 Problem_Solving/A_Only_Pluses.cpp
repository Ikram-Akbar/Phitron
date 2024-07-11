#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int max_bananas = 0;
        
       
        for (int i = 0; i <= 5; ++i) {
            for (int j = 0; j <= 5 - i; ++j) {
                int k = 5 - i - j;
                int new_a = a + i;
                int new_b = b + j;
                int new_c = c + k;
                int bananas = new_a * new_b * new_c;
                max_bananas = max(max_bananas, bananas);
            }
        }
        
        cout << max_bananas << endl;
    }
    return 0;
}
