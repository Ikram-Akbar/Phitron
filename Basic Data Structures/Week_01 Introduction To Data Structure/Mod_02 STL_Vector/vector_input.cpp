#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> numbers(n);
for(int i = 0; i < n; i++)
{
    cin >> numbers[i];
}

    // output:
    for(int val:numbers)
    {
        cout<<val<<" ";
    }
  return 0;
}