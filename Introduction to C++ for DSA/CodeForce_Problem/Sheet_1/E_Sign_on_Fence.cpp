#include<bits/stdc++.h>
using namespace std;

// Function to build the Sparse Table
void buildSparseTable(const vector<int>& heights, vector<vector<int>>& st) {
    int n = heights.size();
    int maxLog = log2(n) + 1;

    // Initialize the first column of the Sparse Table
    for (int i = 0; i < n; ++i) {
        st[i][0] = heights[i];
    }

    // Build the rest of the Sparse Table
    for (int j = 1; (1 << j) <= n; ++j) {
        for (int i = 0; (i + (1 << j) - 1) < n; ++i) {
            st[i][j] = min(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
        }
    }
}

// Function to perform range minimum query using the Sparse Table
int rangeMinimumQuery(int l, int r, const vector<vector<int>>& st) {
    int length = r - l + 1;
    int log = log2(length);
    return min(st[l][log], st[r - (1 << log) + 1][log]);
}

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int m;
    cin >> m;

    vector<tuple<int, int, int>> queries(m);
    for (int i = 0; i < m; ++i) {
        int l, r, w;
        cin >> l >> r >> w;
        queries[i] = make_tuple(l - 1, r - 1, w); // Convert to 0-based indexing
    }

    int maxLog = log2(n) + 1;
    vector<vector<int>> sparseTable(n, vector<int>(maxLog));

    // Build the Sparse Table
    buildSparseTable(heights, sparseTable);

    // Process each query
    for (const auto& query : queries) {
        int l, r, w;
        tie(l, r, w) = query;

        int minHeight = INT_MAX;
        for (int i = l; i <= r - w + 1; ++i) {
            minHeight = min(minHeight, rangeMinimumQuery(i, i + w - 1, sparseTable));
        }

        cout << minHeight << endl;
    }

    return 0;
}
