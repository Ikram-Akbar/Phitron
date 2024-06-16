#include<bits/stdc++.h>

using namespace std;

int main() {
  int q;
  cin >> q;
  while (q--) {
    bool flag = true;
    int n;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++) {
      cin >> numbers[i];
    }
    for (int i = 0; i < n - 1; i++) {
      if (numbers[i] > numbers[i + 1]) {
        flag = false;
        break;
      }
    }
    if (flag == false) cout << "NO" << endl;
    else cout << "YES" << endl;
  }

  return 0;
}