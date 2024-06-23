#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int nums[n];
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  int target;
  cin >> target;

  bool flag = false;
  int left_index = 0;
  int right_index = n - 1;

  while (left_index <= right_index) {
    int mid = (left_index + right_index) / 2;

    if (nums[mid] == target) {
      flag = true;
      break;
    } else if (nums[mid] < target) {
      left_index = mid + 1;
    } else {
      right_index = mid - 1;
    }
  }

  if (flag) {
    cout << "Target found" << endl;
  } else {
    cout << "Target not found" << endl;
  }

  return 0;
}
