/* 
Problem-3: Search Query

WAP that takes an array of size n and q queries as input. For each query you will be given a number. For each query you have to print ‘YES’ if the number is present in the array, otherwise print ‘No’. Solve the problem in O((n+q)*logn)


 */


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    while (q--)
    {
        int target_num;
        cin >> target_num;
        
        int left = 0;
        int right = n - 1;
        bool flag = false;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;  // Correct calculation of mid

            if (arr[mid] == target_num)
            {
                flag = true;
                break;
            }
            else if (arr[mid] < target_num)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
