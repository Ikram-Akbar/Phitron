#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  int numbers[n];
  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }
  sort(numbers, numbers + n);
  while (q--) {
    int target;
    cin >> target;
    bool flag = false;
    int left_index = 0;
    int right_index = n - 1;
    while (left_index <= right_index) {
      int mid = (left_index + right_index) / 2;
      if (numbers[mid] == target) {
        flag = true;
        break;
      } else if (numbers[mid] < target) {
        left_index = mid + 1;
      } else {
        right_index = mid - 1;
      }
    }
    if (flag == true) {
      cout << "found" << endl;
    } else {
      cout << "not found" << endl;
    }
  }
  return 0;
}