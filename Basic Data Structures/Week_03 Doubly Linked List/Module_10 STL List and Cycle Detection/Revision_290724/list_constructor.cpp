#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myNumbers = {10, 20, 30, 50, 60};
    vector<int> nums = {1214, 1414, 2001};
    list<int> cpy_nums(nums.begin(), nums.end());

    for (auto it = cpy_nums.begin(); it != cpy_nums.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}