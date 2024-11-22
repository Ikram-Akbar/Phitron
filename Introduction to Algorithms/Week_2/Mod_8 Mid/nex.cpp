

#include <bits/stdc++.h>
using namespace std;

void dijkstra(int src, const vector<vector<pair<int, int>>>& graph, vector<int>& distances) {
    distances[src] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});

    while (!pq.empty()) {
        int current_cost = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (current_cost > distances[node]) {
            continue;
        }

        for (const auto& edge : graph[node]) {
            int next_node = edge.first;
            int edge_cost = edge.second;

            if (current_cost + edge_cost < distances[next_node]) {
                distances[next_node] = current_cost + edge_cost;
                pq.push({distances[next_node], next_node});
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> graph(n + 1);

    for (int i = 0; i < m; ++i) {
        int u, v, cost;
        cin >> u >> v >> cost;
        graph[u].emplace_back(v, cost);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int src, dest;
        cin >> src >> dest;

        vector<int> distances(n + 1, numeric_limits<int>::max());
        dijkstra(src, graph, distances);

        if (distances[dest] == numeric_limits<int>::max()) {
            cout << -1 << endl;
        } else {
            cout << distances[dest] << endl;
        }
    }

    return 0;
}
