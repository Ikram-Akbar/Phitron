#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isValid(int x, int y, int n, int m, vector<vector<char>> &grid, vector<vector<bool>> &visited)
{
    if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !visited[x][y])
    {
        return true;
    }
    return false;
}

void bfs(int startX, int startY, vector<vector<char>> &grid, vector<vector<bool>> &visited)
{
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<int, int>> q;
    q.push({startX, startY});
    visited[startX][startY] = true;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if (isValid(newX, newY, n, m, grid, visited))
            {
                q.push({newX, newY});
                visited[newX][newY] = true;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int startX, startY, endX, endY;
    cin >> startX >> startY >> endX >> endY;

    if (grid[startX][startY] == '-' || grid[endX][endY] == '-')
    {
        cout << "NO" << endl;
        return 0;
    }

    bfs(startX, startY, grid, visited);

    if (visited[endX][endY])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
