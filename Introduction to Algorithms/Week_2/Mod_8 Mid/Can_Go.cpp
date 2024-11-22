#include <bits/stdc++.h>
using namespace std;

vector<vector<pair<int, int>>> graph;
vector<int> dist;

void dijkstra(int source, int n) {
    dist.assign(n + 1, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    dist[source] = 0;
    pq.push({0, source});
    
    while (!pq.empty()) {
        int currCost = pq.top().first;
        int currNode = pq.top().second;
        pq.pop();
        
        if (currCost > dist[currNode]) continue;
        
        for (auto edge : graph[currNode]) {
            int nextNode = edge.first;
            int edgeCost = edge.second;
            
            if (dist[currNode] + edgeCost < dist[nextNode]) {
                dist[nextNode] = dist[currNode] + edgeCost;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    graph.resize(n + 1);

    for (int i = 0; i < e; i++) {
        int u, v, cost;
        cin >> u >> v >> cost;
        graph[u].push_back({v, cost});
    }

    int source;
    cin >> source;

    dijkstra(source, n);

    int q;
    cin >> q;
    
    while (q--) {
        int destination, maxCost;
        cin >> destination >> maxCost;
        
        if (dist[destination] <= maxCost) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
