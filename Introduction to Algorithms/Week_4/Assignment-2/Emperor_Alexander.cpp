#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Edge {
public:
    int u, v, weight;
    Edge(int u, int v, int weight) {
        this->u = u;
        this->v = v;
        this->weight = weight;
    }
};

bool compareEdge(Edge a, Edge b) {
    return a.weight < b.weight;
}

class Graph {
public:
    int N, B;
    vector<Edge> edges;
    vector<int> parent;

    Graph(int N, int B) {
        this->N = N;
        this->B = B;
        parent.resize(N + 1); 
    }

    void addEdge(int u, int v, int w) {
        edges.push_back(Edge(u, v, w));
    }

    int findParent(int node) {
        if (parent[node] == node) return node;
        return parent[node] = findParent(parent[node]);
    }

    void unionNodes(int u, int v) {
        int parentU = findParent(u);
        int parentV = findParent(v);
        if (parentU != parentV) {
            parent[parentV] = parentU; 
        }
    }

    pair<int, int> findMinimumCost() {
        sort(edges.begin(), edges.end(), compareEdge);

        for (int i = 1; i <= N; i++) {
            parent[i] = i; 
        }

        int totalCost = 0;
        int edgesUsed = 0;

        for (auto &edge : edges) {
            int u = edge.u;
            int v = edge.v;
            int w = edge.weight;

            if (findParent(u) != findParent(v)) {
                unionNodes(u, v);
                totalCost += w;
                edgesUsed++;
            }
        }

        if (edgesUsed == N - 1) {
            int roadsToRemove = B - edgesUsed;
            return {roadsToRemove, totalCost};
        } else {
            return {-1, -1};
        }
    }
};

int main() {
    int N, B;
    cin >> N >> B;

    Graph g(N, B);

    for (int i = 0; i < B; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        g.addEdge(u, v, w);
    }

    pair<int, int> result = g.findMinimumCost();

    if (result.first == -1) {
        cout << "Not Possible" << endl;
    } else {
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
