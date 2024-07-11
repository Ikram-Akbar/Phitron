#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        vector<int> permutation(n);
        
        // Construct f(i) part (larger numbers)
        int current = n;
        for (int i = 0; i < n - k; ++i) {
            permutation[i] = current--;
        }
        
        // Construct g(i) part (smaller numbers)
        current = 1;
        for (int i = n - k; i < n - k + m; ++i) {
            permutation[i] = current++;
        }
        
        // Output the permutation
        for (int i = 0; i < n; ++i) {
            cout << permutation[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
