#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool hasZero(int num)
    {
        while (num > 0)
        {
            if (num % 10 == 0)
                return true;
            num /= 10;
        }
        return false;
    }

    vector<int> getNoZeroIntegers(int n)
    {
        for (int a = 1; a < n; ++a)
        {
            int b = n - a;
            if (!hasZero(a) && !hasZero(b))
            {
                return {a, b};
            }
        }
        return {};
    }
};

int main()
{
    Solution s;
    int num;
    cin >> num;

    vector<int> res = s.getNoZeroIntegers(num);
    if (!res.empty())
    {
        cout << res[0] << " " << res[1] << endl;
    }
    else
    {
        cout << "No such pair found." << endl;
    }

    return 0;
}