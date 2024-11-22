#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<vector<int>> adjMat(n);
    
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adjMat[u].push_back(v);  
    }

    int q;
    cin >> q; 
    while (q--) {
        int A, B;
        cin >> A >> B;  

        if (find(adjMat[A].begin(), adjMat[A].end(), B) != adjMat[A].end() || A == B) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
