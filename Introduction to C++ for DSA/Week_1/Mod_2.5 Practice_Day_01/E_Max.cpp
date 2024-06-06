#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int numbers[n];

  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }

  int mx = numbers[0];

  for (int i = 0; i < n; i++) {
    mx = max(mx, numbers[i]);
  }
  cout << mx << endl;
  return 0;
}