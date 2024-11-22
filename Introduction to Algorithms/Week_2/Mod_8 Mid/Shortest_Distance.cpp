#include <iostream>
#include <vector>
#include <limits>
using namespace std;

const long long INF = 1e18;

int main() {
    int N, E;
    cin >> N >> E;

    
    vector<vector<long long>> dist(N + 1, vector<long long>(N + 1, INF));

   
    for (int i = 1; i <= N; ++i) {
        dist[i][i] = 0;
    }

    
    for (int i = 0; i < E; ++i) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        dist[u][v] = min(dist[u][v], w);  
    }

 
    for (int k = 1; k <= N; ++k) {
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= N; ++j) {
                if (dist[i][k] < INF && dist[k][j] < INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int X, Y;
        cin >> X >> Y;
        if (dist[X][Y] == INF) {
            cout << -1 << '\n';
        } else {
            cout << dist[X][Y] << '\n';
        }
    }

    return 0;
}
