#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
const int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};

// চেক করবে যে সেলটি বোর্ডের ভিতরে আছে কিনা
bool isValid(int x, int y, int N) {
    return (x >= 0 && x < N && y >= 0 && y < N);
}

// BFS ব্যবহার করে ন্যূনতম মুভ বের করা
int bfs(int N, pair<int, int> knightPos, pair<int, int> queenPos) {
    vector<vector<int>> dist(N, vector<int>(N, -1));  // প্রতিটি সেলের দূরত্ব
    queue<pair<int, int>> q;
    q.push(knightPos);
    dist[knightPos.first][knightPos.second] = 0;

    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();

        if (curr == queenPos) {  // যদি ঘোড়া রানীর পজিশনে পৌঁছায়
            return dist[curr.first][curr.second];
        }

        for (int i = 0; i < 8; ++i) {  // ৮টি সম্ভাব্য মুভ চেক করা
            int newX = curr.first + dx[i];
            int newY = curr.second + dy[i];

            if (isValid(newX, newY, N) && dist[newX][newY] == -1) {  // বোর্ডের ভেতরে এবং পূর্বে না ঘোরা হলে
                dist[newX][newY] = dist[curr.first][curr.second] + 1;
                q.push({newX, newY});
            }
        }
    }

    return -1;  // রানীকে আক্রমণ করা সম্ভব না হলে
}

int main() {
    int N;
    cin >> N;  // দাবার বোর্ডের সাইজ

    while (true) {
        int knightX, knightY, queenX, queenY;
        cin >> knightX >> knightY >> queenX >> queenY;

        if (knightX == 0 && knightY == 1 && queenX == 0 && queenY == 1) {
            break;  // যদি `0 1 0 1` ইনপুট দেওয়া হয়, লুপ থেকে বের হয়ে আসবে
        }

        int result = bfs(N, {knightX, knightY}, {queenX, queenY});
        cout << result << endl;
    }

    return 0;
}
