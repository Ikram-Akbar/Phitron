#include<bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int numbers[n];
  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }

 vector<long long int> pre(n);
  pre[0] = numbers[0];

  for (int i = 1; i < n; i++) {
    pre[i] = numbers[i] + pre[i - 1];
  }

  reverse(pre.begin(), pre.end());

  for(auto item:pre)
  {
    cout << item << " ";
  }

/* 
** Row CPP code for reverse oder print : 
  int size = sizeof(pre) / sizeof(pre[0]);
  for (int i = 0; i < size / 2; i++) {
    long long int temp = pre[i];
    pre[i] = pre[size - 1 - i];
    pre[size - 1 - i] = temp;
  }

  for (int i = 0; i < n; i++) {
    cout << pre[i] << " ";
  } 
  
  */

  return 0;
}