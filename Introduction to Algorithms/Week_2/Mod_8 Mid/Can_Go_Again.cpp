#include <iostream>
#include <vector>
#include <limits>
using namespace std;

const long long INF = numeric_limits<long long>::max();

class Edge {
public:
    int u, v;
    long long w;

    Edge(int u, int v, long long w) : u(u), v(v), w(w) {}
};

int main() {
    int N, E;
    cin >> N >> E;

    vector<Edge> edges;
    for (int i = 0; i < E; ++i) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        edges.emplace_back(u, v, w);
    }

    int source;
    cin >> source;

    int T;
    cin >> T;
    vector<int> destinations(T);
    for (int i = 0; i < T; ++i) {
        cin >> destinations[i];
    }

   
    vector<long long> dist(N + 1, INF);
    dist[source] = 0;
    bool negativeCycle = false;

    for (int i = 1; i <= N; ++i) {
        bool updated = false;
        for (const auto &edge : edges) {
            if (dist[edge.u] != INF && dist[edge.u] + edge.w < dist[edge.v]) {
                dist[edge.v] = dist[edge.u] + edge.w;
                updated = true;
                if (i == N) {
                    negativeCycle = true;
                }
            }
        }
        if (!updated) break;
    }

    if (negativeCycle) {
        cout << "Negative Cycle Detected\n";
    } else {
        for (int d : destinations) {
            if (dist[d] == INF) {
                cout << "Not Possible\n";
            } else {
                cout << dist[d] << '\n';
            }
        }
    }

    return 0;
}
