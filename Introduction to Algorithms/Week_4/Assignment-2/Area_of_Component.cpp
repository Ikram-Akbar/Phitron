#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<vector<char>> grid;
vector<vector<bool>> visited;

int dfs(int x, int y) {
    if (x < 0 || x >= N || y < 0 || y >= M || grid[x][y] == '-' || visited[x][y])
        return 0;

    visited[x][y] = true;
    int area = 1;

    area += dfs(x + 1, y); 
    area += dfs(x - 1, y); 
    area += dfs(x, y + 1); 
    area += dfs(x, y - 1); 

    return area;
}

int findMinComponentArea() {
    int minArea = N * M + 1;
    bool hasComponent = false;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                int area = dfs(i, j);
                minArea = min(minArea, area);
                hasComponent = true;
            }
        }
    }

    return hasComponent ? minArea : -1;
}

int main() {
    cin >> N >> M;

    grid.resize(N, vector<char>(M));
    visited.resize(N, vector<bool>(M, false));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }

    cout << findMinComponentArea() << endl;

    return 0;
}
