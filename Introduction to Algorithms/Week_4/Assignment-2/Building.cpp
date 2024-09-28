#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool compare(Edge a, Edge b)
{
    return a.w < b.w;
}

class Graph
{
public:
    vector<int> parent, rankSet;

    Graph(int N)
    {
        parent.resize(N + 1);
        rankSet.resize(N + 1, 0);
        for (int i = 1; i <= N; i++)
        {
            parent[i] = i;
        }
    }

    int find(int x)
    {
        if (parent[x] != x)
        {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unionSets(int x, int y)
    {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY)
        {
            if (rankSet[rootX] > rankSet[rootY])
            {
                parent[rootY] = rootX;
            }
            else if (rankSet[rootX] < rankSet[rootY])
            {
                parent[rootX] = rootY;
            }
            else
            {
                parent[rootY] = rootX;
                rankSet[rootX]++;
            }
        }
    }
};

int main()
{
    int N, E;
    cin >> N >> E;

    vector<Edge> edges;
    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(Edge(u, v, w));
    }

    sort(edges.begin(), edges.end(), compare);

    Graph g(N);

    int mstCost = 0;
    int edgesUsed = 0;

    for (int i = 0; i < E; i++)
    {
        int u = edges[i].u;
        int v = edges[i].v;

        if (g.find(u) != g.find(v))
        {
            g.unionSets(u, v);
            mstCost += edges[i].w;
            edgesUsed++;
        }
    }

    if (edgesUsed == N - 1)
    {
        cout << mstCost << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
