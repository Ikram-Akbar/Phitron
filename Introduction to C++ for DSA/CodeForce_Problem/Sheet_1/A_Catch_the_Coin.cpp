#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Coin {
  int x;
  int y;
};

bool canCatchCoin(int x, int y) {
  // Check if the coin is reachable within one move (Manhattan distance <= 1)
  if (abs(x) <= 1 && abs(y) <= 1) {
    return true;
  }

  return false;
}

// Optimized BFS using a queue to explore reachable positions
bool canCatchAnyCoin(const vector<Coin>& coins) {
  int startX = 0, startY = 0;

  queue<pair<int, int>> reachablePositions;
  reachablePositions.push({startX, startY});

  while (!reachablePositions.empty()) {
    int currentX = reachablePositions.front().first;
    int currentY = reachablePositions.front().second;
    reachablePositions.pop();

    // Check for any coin at the current position
    for (const Coin& coin : coins) {
      if (coin.x == currentX && coin.y == currentY) {
        return true; // Found a reachable coin
      }
    }

    // Add reachable positions for the next move (including diagonals)
    vector<pair<int, int>> nextMoves = {
      {currentX, currentY + 1},
      {currentX + 1, currentY},
      {currentX, currentY - 1},
      {currentX - 1, currentY},
      {currentX + 1, currentY + 1}, // Diagonal (right-up)
      {currentX + 1, currentY - 1}, // Diagonal (right-down)
      {currentX - 1, currentY + 1}, // Diagonal (left-up)
      {currentX - 1, currentY - 1}   // Diagonal (left-down)
    };

    for (const auto& nextMove : nextMoves) {
      reachablePositions.push(nextMove);
    }
  }

  return false; 
}

int main() {
  int n;
  cin >> n;

  vector<Coin> coins(n);
  for (int i = 0; i < n; i++) {
    cin >> coins[i].x >> coins[i].y;
  }

  for (const Coin& coin : coins) {
    if (canCatchCoin(coin.x, coin.y)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

 

  return 0;
}
