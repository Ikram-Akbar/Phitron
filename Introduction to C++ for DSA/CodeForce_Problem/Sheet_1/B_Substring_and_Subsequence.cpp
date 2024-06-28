#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Function to find the length of the longest common subsequence (LCS)
int lcs_length(const string& a, const string& b) {
    int n = a.size();
    int m = b.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    
    return dp[n][m];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int lcs = lcs_length(a, b);
        int min_length = a.size() + b.size() - lcs;
        cout << min_length << endl;
    }
    return 0;
}
