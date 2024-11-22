#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005]; // Adjacency list for the graph
bool visited_node[1005]; // Visited array to mark visited nodes

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited_node[src] = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << "Node: " << node << endl;
        
        for (int child : adj[node])
        {
            cout << "Child: " << child << endl;
            if (!visited_node[child])
            {
                q.push(child);
                visited_node[child] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(visited_node, false, sizeof(visited_node));

    int src;
    cin >> src;
    bfs(src);

    return 0;
}
