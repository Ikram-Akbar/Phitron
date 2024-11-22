#include<bits/stdc++.h>
using namespace std;

const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};

void dfs(int x, int y, vector<vector<char>>& grid, vector<vector<bool>>& visited, int& roomSize, int n, int m) {
    visited[x][y] = true;
    roomSize++;

    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && grid[nx][ny] == '.') {
            dfs(nx, ny, grid, visited, roomSize, n, m);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }
    
    
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    vector<int> apartmentSizes;
    
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                
                int roomSize = 0;
                dfs(i, j, grid, visited, roomSize, n, m);
                apartmentSizes.push_back(roomSize);
            }
        }
    }
    
   
    sort(apartmentSizes.begin(), apartmentSizes.end());
    
  
    if (apartmentSizes.empty()) {
        cout << 0 << endl;
    } else {
        for (int size : apartmentSizes) {
            cout << size << " ";
        }
        cout << endl;
    }
    
    return 0;
}
