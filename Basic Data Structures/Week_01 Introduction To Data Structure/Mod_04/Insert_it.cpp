#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> num_a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> num_a[i];
    }

    int m;
    cin >> m;
    vector<int> num_b(m);
    for(int i = 0; i < m; i++)
    {
        cin >> num_b[i];
    }
    
    int target_position;
    cin >> target_position;

    num_a.insert(num_a.begin() + target_position, num_b.begin(), num_b.end());
    for(int val: num_a)
    {
        cout << val << " ";
    }

    return 0;
}
