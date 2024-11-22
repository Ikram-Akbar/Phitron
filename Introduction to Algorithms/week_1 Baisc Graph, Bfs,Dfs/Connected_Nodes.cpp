#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;
    vector<int> adj[n + 1];
    
    while(e--) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b); 
        adj[b].push_back(a); 
    }
    
    int q;
    cin >> q;
    
    while(q--) {
        int q;
        cin >> q;
        
        if(adj[q].empty()) {
            cout << -1 << endl;
        } else {
           
            sort(adj[q].begin(), adj[q].end(), greater<int>());
            
      
            for(int i = 0; i < adj[q].size(); i++) {
                cout << adj[q][i] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
