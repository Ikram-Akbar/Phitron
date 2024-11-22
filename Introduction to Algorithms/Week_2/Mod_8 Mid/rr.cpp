#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int u, v, c;
    Edge(int u, int v, int c) {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int N = 1e5 + 5;
int dis[N];

bool bellman_ford(int n, vector<Edge>& EdgeList, int source) {
    fill(dis, dis + n, INT_MAX);
    dis[source] = 0;

    for (int i = 1; i <= n - 1; i++) {
        for (Edge ed : EdgeList) {
            int u = ed.u;
            int v = ed.v;
            int c = ed.c;
            if (dis[u] < INT_MAX && dis[u] + c < dis[v]) {
                dis[v] = dis[u] + c;
            }
        }
    }

    for (Edge ed : EdgeList) {
        int u = ed.u;
        int v = ed.v;
        int c = ed.c;
        if (dis[u] < INT_MAX && dis[u] + c < dis[v]) {
            return false;
        }
    }

    return true;
}

int main() {
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;

    for (int i = 0; i < e; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }

    int source;
    cin >> source;

    if (!bellman_ford(n, EdgeList, source)) {
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    int q;
    cin >> q;
    while (q--) {
        int destination;
        cin >> destination;
        if (dis[destination] == INT_MAX) {
            cout << "Not Possible" << endl;
        } else {
            cout << dis[destination] << endl;
        }
    }

    return 0;
}
