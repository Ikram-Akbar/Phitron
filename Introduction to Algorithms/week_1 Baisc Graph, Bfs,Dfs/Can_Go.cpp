#include<bits/stdc++.h>
using namespace std;

const int dx[4] = {1, -1, 0, 0}; 
const int dy[4] = {0, 0, 1, -1}; 


bool isValid(int x, int y, int n, int m, vector<vector<char>>& grid, vector<vector<bool>>& visited) {
    return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#' && !visited[x][y];
}

bool canReach(vector<vector<char>>& grid, pair<int, int> start, pair<int, int> end) {
    int n = grid.size();
    int m = grid[0].size();
    
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;
    
    q.push(start);
    visited[start.first][start.second] = true;
    
    while(!q.empty()) {
        pair<int, int> current = q.front(); 
        q.pop();
        
        if(current == end) return true;
        
        for(int i = 0; i < 4; ++i) {
            int nx = current.first + dx[i];
            int ny = current.second + dy[i];
            
            if(isValid(nx, ny, n, m, grid, visited)) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<char>> grid(n, vector<char>(m));
    pair<int, int> start, end;
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> grid[i][j];
            if(grid[i][j] == 'A') start = {i, j};
            if(grid[i][j] == 'B') end = {i, j};
        }
    }
    
    if(canReach(grid, start, end)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}
